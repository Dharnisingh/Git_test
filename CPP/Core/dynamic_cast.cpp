/* Program to  demonstrate dynamic_cast
 */
#include <iostream>

using namespace std;

class base
{

public:
virtual void disp()
{
	cout << "Base disp\n";
}

};

class der: public base
{
	
public:
	void disp()
	{
		cout << "Derieved disp\n";
	}

};

class test:public base
{
public:
	virtual void disp()
	{
		cout << "Test Diso\n";
	}
};

int main()
{
test t1;
base b;
der d1;
base *bp = dynamic_cast<base*>(&d1);

test* tp = dynamic_cast<test*> (bp);
if(tp)
	cout << "Success\n";
else
	cout << "Failure\n";

bp->disp();

return 0;
}

