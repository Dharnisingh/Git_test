/* Create vector of custom object
 */
#include <iostream>
#include <vector>

using namespace std;

struct x
{
public:
	x()
	{
		cout << "Default Constructor\n";
	}
	x(const x& obj)
	{
		cout << "Copy Constructor\n";
	}
};

int main()
{
x obj, obj1,obj2,obj3;
vector<x> vec {obj1,obj2,obj3};

return 0;
}
