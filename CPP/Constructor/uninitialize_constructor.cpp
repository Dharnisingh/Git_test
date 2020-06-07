// The main job of constructor is to DEFINE the variables declared in class
#include <iostream>

using namespace std;

class stu
{
	int roll;
	string name;

public:
//	stu(){}
	void dsp()
	{
		cout << "Name =" << name << endl;
		cout << "Roll =" << roll << endl;
	}
};

int main()
{
stu obj; // can not be called like obj() if calling default constructor

obj.dsp();

return 0;
}
