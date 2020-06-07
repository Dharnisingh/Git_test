/* Program to implement shared_ptr
 */
#include <iostream>
#include <memory>

using namespace std;

class test
{

public:
	test()
	{
		cout << "Default constructor\n";
	}
	~test()
	{
		cout << "Default Destructor\n";
	}
	void show()
	{
		cout << "Method of test::show\n";
	}

};

int main()
{
shared_ptr<test> ptr(new test);
cout << "Address of ptr: " << ptr.get() << " Use cout of ptr: " << ptr.use_count() << endl;
shared_ptr<test> ptr1 = ptr; // ptr1 will also point to ptr
cout << "Address of ptr1: " << ptr1.get() << " Use cout of ptr1: " << ptr1.use_count() << endl;

ptr.reset();
cout << "Address of ptr: " << ptr.get() << " Use cout of ptr: " << ptr.use_count() << endl;
cout << "Address of ptr1: " << ptr1.get() << " Use cout of ptr1: " << ptr1.use_count() << endl;

return 0;
}

