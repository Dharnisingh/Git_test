/* This program demonstrate overloading of stream output operator
 *  This operactor is a non mebeber operator so it shold be
 *  implemented as a friend function.
 */
#include <iostream>

using namespace std;

class stu
{
	public:
		int roll;
		string name;
		
		stu(int ro, string n): roll(ro), name(n)
		{
			cout << "Constructor\n";
		}
		//Second argument can be a non meber type so implemnted as friend
		friend ostream& operator<<(ostream& out, const stu& o); 
};

ostream& operator<<(ostream& out, const stu& obj)  
{
    out<< "Roll = " << obj.roll << endl;
    out<< "Name = " << obj.name << endl;
    return out;
}

int main()
{
stu obj(1, "Raam");
cout << obj;
return 0;
}
