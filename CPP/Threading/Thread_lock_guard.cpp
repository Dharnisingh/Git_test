/* Program to implement lock_guard<mutex> 
 */
#include<iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex m1;
int counter=0;

void task(const char* tname, int loopfor)
{
//Automatically releases the lock obce goes out of scope
// will acquire the lock at the time of instantiation
lock_guard<mutex> lguard(m1);
	for(int i=0; i<loopfor; i++)
	{
		counter++;
		cout << "Thread " << tname << " Counter " << counter << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
//scope ends here lock will be released
}

int main()
{
thread t2(task, "Thread_two", 10);
thread t1(task, "Thread_one", 10);

if(t1.joinable())
	t1.join();
if(t2.joinable())
	t2.join();

return 0;
}
