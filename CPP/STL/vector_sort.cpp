/* Sort the elements of vector of custom object
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class stu
{
private:
	int roll;
	string name;
public:
	stu(const int r, const string n):roll(r), name(n)
	{
		cout << "Calling Constructor\n";
	}
	stu(const stu& obj)
	{
		cout << "Copy COnstructor\n";
		name = obj.name;
		roll = obj.roll;
	}
	~stu()
	{
		cout << "Destructor called\n";
	}
	stu& operator=(const stu& obj)
	{
		cout << "Overloaded assignment operator\n";
		return *this;
	}
	int get_roll()
	{
		return roll;
	}
	string get_name()
	{
		return name;
	}

	bool operator<(stu& obj)
	{
	cout << "Calling Compare\n";

	return (roll <  obj.get_roll());
	}

};
/* Did not work
bool compare(stu& obj1, stu& obj2)
{
	cout << "Calling Compare\n";
	return (obj1.get_roll() >  obj2.get_roll());
}
*/



int main()
{
vector<stu> vec;
vec.push_back(stu(1,"DD"));
vec.push_back(stu(9,"DS"));
vec.push_back(stu(8,"DG"));
vec.push_back(stu(4,"DN"));
vec.push_back(stu(7,"DP"));


sort(vec.begin(), vec.end());

for(auto x: vec)
	cout << "Roll = " << x.get_roll() << endl;



return 0;
}
