/* Program to implement assignment operator overloading
 */
#include <iostream>

using namespace std;

class x{
int a;

public:
	x(int i){a = i;}
	// Assignmetn operator can only be member function not a global obe.
	// make sure to check for self assignment.
	x& operator=(x& obj)
	{
		//Self assignment portection
		if(&obj != this)
		{
			a = obj.a;
		}
		// Return current object
		return *this;
	}

	void print()
	{
		cout << "Value = " << a << endl;
	}
};


int main()
{
x obj1(5);
x obj2(10);
// Allows chaning of operator
obj1 = obj2 = obj1 = obj2;

obj1.print();

return 0;
}
