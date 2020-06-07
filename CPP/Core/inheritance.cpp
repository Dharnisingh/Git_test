// Private members can not be accessed outsinde the class
#include <iostream>

using namespace std;

class x
{
	int a,b;
public:
	x(int one, int two):a(one),b(two){cout <<"Base constructor\n";}
	int get()
	{
		return a;
	}
	void print()
	{
		cout << "Val =" << a << endl;
	}
};

class y: public x
{
	int c,d;
public:
	y(int o, int t):x(1,2), c(o),d(t)
	{
		cout << "Derived Constructor\n";
	}
	int get_x()
	{
		//a = 5;  can not be accessed
		cout << "Going to call base public method\n";
		return get();
	}
};

int main()
{
y obj(1,2);
obj.get();
return 0;
}
