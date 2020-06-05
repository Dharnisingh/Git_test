#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>
using namespace std;

condition_variable cv;
mutex m;

int balance =0;

void addmoney(int money)
{
	// Acquire the lock
	lock_guard<mutex> lg(m);
	balance = balance + money;
	cout << "Amount added: " << balance << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	// Done with adding money now notify thread
	// waiting on this conditional variable
	cv.notify_one();
}

void withdraw(int money)
{
	unique_lock<mutex> ul(m);
	// Start waiting for the Condition Variable to get signaled
        // Wait() will internally release the lock and make the thread to block
    	// As soon as condition variable get signaled, resume the thread and
    	// again acquire the lock. Then check if condition is met or not
    	// If condition is met then continue else again go in wait.
	cv.wait(ul, []{return (balance !=0) ? true : false;});

	if(balance >= money)
	{
		balance -= money;
		cout << "Amount deducted: " << money << " Balance : "<< balance <<endl;
	}
	else
	{
		cout << "Balance is less " << endl;
	}

}

int main()
{
thread t1(withdraw, 200);
thread t2(addmoney, 1000);

if(t1.joinable())
	t1.join();
if(t2.joinable())
	t2.join();

return 0;
}
