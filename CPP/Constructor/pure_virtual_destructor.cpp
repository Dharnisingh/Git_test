/* Program to implement virtual destructor
 */
#include <iostream>

using namespace std;

class x
{
	int a;

	public:
		x()
		{
			cout << "Constructor of x\n";
		}
		// Body is mandatory else inherited class from this will not be able to create object
		virtual ~x()=0;
};

//Function body ooutside of class
x::~x()
{
	cout << "Virtual Destructor\n";
}

class y:public x
{
	public:
	y()
	{
		cout << "Constructor of y\n";
	}
};

int main()
{
//x*  obj= new x;
y obj;
return 0;
}
