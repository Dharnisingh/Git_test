/* This program will an object in list of custom objects
 */
#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;


class stu
{
int roll;
string name;
	public:
	stu(int r, string str): roll(r), name(str)
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
	stu(const stu& obj)
	{
		//Dont know how we are able to access private elements through object
		roll = obj.roll;
		name = obj.name;
	}

};

bool srch(stu& obj, int y)
{
	cout << "Calling comparator\n";
	if(obj.get_roll() == y)
		return true;
	
	return false;
}

int main()
{
list<stu> student;
stu stu1(1,"Raam");
stu stu2(2,"shyam");
stu stu3(3,"Raman");
stu stu4(6,"Suman");
stu stu5(5,"Ganesh");
student.push_back(stu1);
student.push_back(stu2);
student.push_back(stu3);
student.push_back(stu4);
student.push_back(stu5);

cout << "Find student with roll 6:\n";

auto it = find_if(student.begin(), student.end(), std::bind(srch,  std::placeholders::_1 ,6));


if(it != student.end())
	cout << "Found\n";
else
	cout << "Not Found\n";

return 0;
}
