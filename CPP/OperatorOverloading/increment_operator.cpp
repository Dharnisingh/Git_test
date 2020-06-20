/* This program demonstrate implementation of pre and post increment operators
 * The same way we can immplement decrement operator as well.
 */
#include <iostream>
using namespace std;

class num
{
	int i;
	public:
		num(int x=0):i(x)
		{}
		//Pre-increment 
		num& operator++()
		{
			//First increment then return the object
			i++;
			return *this;
		}
		//Post increment
		num operator++(int)
		{
			num temp(i);
			i++;
			return temp;
		}
		void disp()
		{
			cout << "Value of I " << i << endl;
		}
};

int main()
{
num x(5);
// Pre
++x;
x.disp();
//post
num y(5);
y++;
y.disp();
return 0;
}
