/* Program to implements try_lock() method
 */
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int counter=0;
mutex m;

void func(int &c)
{
	for(int i=0; i<1000; i++)
	{
		cout << "I am thread: " << this_thread::get_id() << " Value of I " << i <<  endl;
		if(m.try_lock()) //Non blocking call
		{
			counter ++;
		        // This will not give expected output
			// because lock is already acquired by some othre thread 
			// and value of index i is incremented
			//
			this_thread::sleep_for(chrono::milliseconds(2));
			m.unlock();
		}
		//this_thread::sleep_for(chrono::milliseconds(2));
	}
	c = counter;
}

int main()
{
thread t[3];
int count = 0;
t[0] = thread(func, ref(count));
t[1] = thread(func, ref(count));
t[2] = thread(func, ref(count));

t[0].join();
t[1].join();
t[2].join();

cout << "Value of counter = " << count << endl;
return 0;
}
