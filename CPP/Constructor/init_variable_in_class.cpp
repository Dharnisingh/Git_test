#include <iostream>

using namespace std;

class x
{
// This was not permited prior to c++11
 int i =5;
	public:
	void print()
	{
		cout << "Value = " << i << endl;
	}
};

int main()
{
x obj;
obj.print();
return 0;
}
