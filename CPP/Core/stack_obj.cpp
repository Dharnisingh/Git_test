/* Program to creat object on stack memory
 */
#include <iostream>
using namespace std;
class abc
{
	private: 
		int x;
	public:
	abc()
	{
		cout << "Constructor" << endl;
	}
	~abc()
	{
		cout << "Dectructor " << endl;
	}

};

int main()
{
abc obj[4];

return 0;
}
