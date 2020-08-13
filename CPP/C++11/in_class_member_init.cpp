//* Thir program demstrate inclass member initialization
///
#include <iostream>
using namespace std;

class A
{
	public:
		const int x = 10;
	private:
};

int main()
{
A obj;
cout << obj.x << endl;
return 0;
}
