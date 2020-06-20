/* This program will create a list of custom object
 */
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class stu
{
int roll;
string name;

public:
	stu(int r, string n):roll(r), name(n)
	{

	}
	bool operator<(const stu& obj)
	{
		cout << "Calling compare\n";
		return roll < obj.roll;
	}
	int get_roll()
	{
		return roll;
	}
};

int main()
{
list<stu> st;

stu obj1(5,"Raam");
stu obj2(2,"Raam");
stu obj3(4,"Raam");
stu obj4(3,"Raam");
stu obj5(1,"Raam");

st.push_back(obj1);
st.push_back(obj2);
st.push_back(obj3);
st.push_back(obj4);
st.push_back(obj5);
//Sort algo needs Random access ierator which list does not support
//sort(st.begin(), st.end());

st.sort(); // sort usese , or > operator to sort the elements in list 
for(auto x: st)
	cout << x.get_roll() << endl;

return 0;
}
