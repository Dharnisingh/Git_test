/* Creating vector of pointers
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class x
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
		~x()
		{
			cout << "Destructor\n";
		}
		x& operator=(x& obj)
		{
			cout << "Assignment operator\n";
			return *this;
		}
		int get_val()
		{
			return y;
		}

	private:
		int y=10;
};

int main()
{
x *obj = new x[10];
vector<x*> vec;
vec.push_back(&obj[0]);
vec.push_back(&obj[1]);
vec.push_back(&obj[2]);
vec.push_back(&obj[3]);
vec.push_back(&obj[9]);

cout << vec[0]->get_val() << endl;
cout << vec[1]->get_val() << endl;

//Deletes array of objects from heap.
delete []obj;

return 0;
}
