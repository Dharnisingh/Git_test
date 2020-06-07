/* Program to implement unique_ptr
 */
#include <iostream>
#include <memory>
using namespace std;

class test
{

public:
	test()
	{
		cout << "Default Constructor\n";
	}
	~test()
	{
		cout << "Default Destructor\n";
	}
	void show()
	{
		cout << "Test::Show()\n";
	}

};

int main()
{
unique_ptr<test> ptr(new test);
ptr->show();

cout << "Address of ptr: " << ptr.get() << endl;
//ptr will points to NULL after this
unique_ptr<test> ptr2 = move(ptr);
cout << "Address of ptr: " << ptr.get() << endl;
cout << "Address of ptr2: " << ptr2.get() << endl;

return 0;
}
