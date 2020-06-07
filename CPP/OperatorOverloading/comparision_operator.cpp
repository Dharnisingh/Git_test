/*Program to implement comparision operator
 */
#include <iostream>

using namespace std;

class x
{
int i;

public:
	x(int a):i(a)
	{

	}
	// We should implement such operatro using friend fucntions
	// as by mistake if we pass obj2>obj1 might give us incorrect result
	// because it will be treated as obj2.operator(obj1)
	bool operator < (const x& obj) const
	{
		return obj.i < i;
	}
	bool operator > (const x& obj) const
	{
		return obj.i > i;
	}
};

int main()
{
x obj1(5);
x obj2(10);

if(obj1 > obj2)
{
	cout << "Obj2 is greater\n";

}
else
{
	cout << "obj1 is greater\n";
}
return 0;
}
