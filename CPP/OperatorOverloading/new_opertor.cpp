/* Program to implement overloading of new operator
 */
#include<iostream>

using namespace std;

class base
{
	public:
		int i;
		base(int ii):i(ii)
		{
			cout << "Constructor called\n";
		}
	// new operato is a static function hence it does not support this pointer
	// delete operator is also a static function
	void* operator new(size_t sz) 
	{
		cout << "Calling overloaded New operator\n";
		// Keep checking until we find a valid memory from heap
		while(true)
		{	
			void* pmem = malloc(sz);
			if(pmem)
				return pmem;
			// instead of 0 we cann pass our own handler function.
			// new_handler function invoked when failed to allocate memory
			std::new_handler myhandler = std::set_new_handler(0);
			std::set_new_handler(myhandler);
			// Calling handler function
			if(myhandler)
				(*myhandler)();
			else
				throw bad_alloc();
			return pmem;
		}
	}
};

int main()
{
//1: Allocate memory
//2: call the constructor
base *obj = new base(5);
// free the memory
delete obj;
return 0;
}
