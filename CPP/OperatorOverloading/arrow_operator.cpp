/* This program demonstrate implementation of overloading arrorw operator
 * 1: It should always be overloaded as member function
 * 2: must always return and object or reference to an object
 * 3: used to implement smart pointers
 */
#include <iostream>
using namespace std;

class Y
{
	public:
		void disp()
		{
			cout << "I am class Y\n";
		}
};

class X
{
	public:
		Y* ptr;
		//Overloading arrow operator
		Y* operator->()
		{
			return ptr;
		}
};

int main()
{
X obj;
//The statement obj->disp() is interpreted as (obj.operator->())->disp().
obj->disp();
return 0;
}
