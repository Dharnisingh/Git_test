/* Program to demonstrate use of this pointer
#include <iostream>

using namespace std;

class stu
{
	int roll;
	string name;
public:
	stu()
	{
		cout << "I am default" << endl;
	}
	stu(int r, string n):roll{r},name{n}{} // this pointer will be passed as hidden argument 
	void disp()
	{
		cout << "Name = " << name << endl;
	       	cout << "Roll = " << roll << endl;	
	}
};


int main()
{
	stu obj();
	//obj.disp();
	stu obj1(1,"Dharni");
	obj1.disp();

	return 0;
}
