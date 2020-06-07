/* Program to implement copy constructor
 */
#include <iostream>

using namespace std;

class x
{
	int i;
public:
	x( int val):i(val)
	{
		cout << "Constructor \n" ;
	}
	
	x(const x& v)
	{
		cout << "Copy consructor\n";
	}
	
	int disp()
	{
		return i;
	}

	~x()
	{
		cout << "Destructor \n";
	}

};

int main()
{
x obj(5); // Constructor
x obj1 = obj; //Copy constructor

x obj2= x(10); // only one constructor and estructor will be called

cout << "Value of obj2 " << obj2.disp() << endl;
cout << "Value =" << obj.disp() << endl;

return 0;
}
