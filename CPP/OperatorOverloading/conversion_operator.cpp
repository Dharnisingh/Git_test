/* Program to implement conversion operator
 */
#include <iostream>

using namespace std;

class x
{
	string name;
public:
	x()
	{
		cout << "Default construtor \n";
	}
	// Conversiomn operator
	// NotE: it does not have a return type
	operator string()
	{
		cout << "Calling Conversion Operator\n";
		return "Hello";
	}	
};

void fun(string s)
{
	cout << "Called Conversion operator\n";
}

int main()
{
x obj;
//c style cast
string s1 = obj;
//Explict cast
string s = static_cast<string> (obj); 

fun(obj);
return 0;
}
