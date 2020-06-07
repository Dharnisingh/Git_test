/* Program to find object with specific object in a list of objects 
 * with user defined values
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class stu
{
string name;
int roll;
	public:
	stu(string n, int r):name(n), roll(r)
	{
	}
	int get_roll()
	{
		return roll;
	}
	string get_name()
	{
		return name;
	}
	// To be used by find algorithm to find the object
	bool operator==(const stu& obj)
	{
		cout << "Calling user define comarator\n";
		if(this->get_roll() == obj.roll)
			return true;
		else
			return false;
	}
};

int main()
{
vector<stu> vec;
vec.push_back(stu("Raam", 2)); //temporary object created and inserted into vector
vec.push_back(stu("shyam",3));
vec.push_back(stu("Ganesh", 1));
vec.push_back(stu("Suresh", 5));
vec.push_back(stu("Krishna", 4));

auto it = find(vec.begin(), vec.end(), stu("Ganesh", 1));
if(it!= vec.end())
	cout << "Item Found\n";
else
	cout << "Item not found\n";

return 0;
}
