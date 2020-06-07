/* Program to implement smart pointer
 */
#include <iostream>

using namespace std;

class smart
{
int* ptr;

public:
	smart(int* p = nullptr)
	{
		cout <<"Calling Constructor\n";
		ptr = p;
	}
	~smart()
	{
		cout << "Calling Destructor\n";
		if(ptr)
			delete ptr;
	}

	int& operator*()
	{
		return *ptr;
	}
};

int main()
{
// Though the object is created on heap we need not to call
// delete explicitly because it is handled in destrucotr of class
int* x = new int(10);
smart obj(x);

cout << "Value of obj = " << *obj << endl;

return 0;
}
