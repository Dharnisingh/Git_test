/* Program to implement for_each algo with lambda function
 */
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

class stu
{
int roll;
string name;
	public:
	stu(int r, string n):roll(r), name(n)
	{}
	int get_roll() const
	{
		return roll;
	}
	string get_name() const
	{
		return name;
	}
};

int main()
{
list<stu> lst;
lst.insert(lst.begin(), stu(1,"Raam"));
lst.insert(lst.begin(), stu(2, "Shyaam"));
// insert 5 instance of stu object
lst.insert(lst.begin(),5, stu(3,"New"));

//Iterate the list and displaye the contest of each object
for_each(lst.begin(), lst.end(), [](const stu& obj){cout << obj.get_roll()<< " " << obj.get_name() << endl;});

return 0;
}
