/* This program explains how to pass a function object to thread
 */
#include <iostream>
#include <thread>

using namespace std;

class stu
{
	int roll;
	public:
	stu(): roll(5){}
	// Implementation of function object
	void operator()(int j)
	{
		for(int i=0; i<10; i++)
			cout << "Executing thread: " << this_thread::get_id() << " " << j << endl;
	}

};


int main()
{
int x = 5;
// Make sure to pass function object in brackets()
thread t1( (stu()), x ); // x is agrument to the function object

if(t1.joinable())
	t1.join();

return 0;
}
