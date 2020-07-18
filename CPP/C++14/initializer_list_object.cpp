/* This program demostrate implementstion of initializer_list of user
 * defined object and how to access them
 */
#include <iostream>
using namespace std;

class a
{
	public:
	int i;
		a(int x):i(x){cout << "Calling default constructor\n";}

		a(const a& obj):i(obj.i)
		{	
			cout << "Calling copy constructor \n";
		} 
};

int main()
{
a x(1);
a y(2);
a z(3);
// Creation of user defined objects  with initalizer_list
std::initializer_list<a> abc = {x,y,x};
// Accssing the elements using iterator of initializer_list
for(auto it : abc)
	cout << it.i << endl;
return 0;
}
