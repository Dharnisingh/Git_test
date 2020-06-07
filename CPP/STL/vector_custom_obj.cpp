/* Creating vector of usder defined object
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class stu
{
int roll;
string name;

public:
	stu(const int& r, const string& n): roll(r), name(n)
	{
		cout << "Constructor called\n";
	}
	~stu()
	{
		cout << "Destructor Called\n";
	}

	stu(const stu& ref)
	{
		roll = ref.roll;
		name = ref.name;
		cout << "Copy Constructor called\n";
	}
	stu& operator =(const stu& obj)
	{
		roll = obj.roll;
		name = obj.name;
		cout << "Assignment operator\n";
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

};

struct srt
{
	bool operator()(stu obj, stu obj1)
	{
		cout << "Calling Sort:\n";
		return obj.get_roll() < obj1.get_roll();
	}
};

int main()
{
	vector<stu> vec;
	vec.push_back(stu(9,"Don"));
	vec.push_back(stu(5,"Don"));
	vec.push_back(stu(1,"Don"));
	vec.push_back(stu(3,"Don"));
	vec.push_back(stu(2,"Don"));

	sort(vec.begin(), vec.end(), srt());

	for(auto it: vec)
		cout << it.get_roll() << " " << it.get_name() << endl;
	/*
	This code is more efficient than above
	vec.reserve(5);
	vec.emplace_back(1,"Suman");
	vec.emplace_back(2,"Raman");
	vec.emplace_back(3,"Kamal");
	vec.emplace_back(4,"Surya");
        */
	return 0;
}
