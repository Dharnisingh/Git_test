/* This program explains how to pass static function as thread function
 */
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

class base
{
	public:
		static void func(int x)
		{
			while(x-->0)
				cout << "Value of x :" << x << endl;
		}
};

int main()
{
// Passing object of class is not needed in case of static function
thread t1(&base::func, 20);

if(t1.joinable())
	t1.join();

return 0;
}
