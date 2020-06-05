/* Program explains how to fetch thread ID
 */
#include <iostream>
#include <thread>

using namespace std;


void func()
{
	int i = 10;
	// Get the current thread ID
	cout << "I am thread " << this_thread::get_id() << endl;
	while( i-- )
	{
		cout << "Value of I = " << i << endl;
	}
}

void func1()
{
	cout << "I am Detached thread " << thread::id() << endl;
}

int main()
{
thread t1(func);
// Thread ID from thread object
cout << "Thread ID from main " << t1.get_id() << endl;
if(t1.joinable())
	t1.join();

//Detached thread ID
thread t2(func1);
t2.detach();
cout << "Detached Thread ID: " << t2.get_id() << endl;

//main will for 5 seconds 
this_thread::sleep_for(chrono::seconds(5));
return 0;
}
