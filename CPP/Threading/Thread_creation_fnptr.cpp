/* This program how to create a thread using function pointer
 * and pass argument to this function pointer and argument to it
 */
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
mutex m;
//Function executed by thread
void myfun(int const & j)
{
	int &k = const_cast<int &>(j);
	// Acquire the lock
	m.lock();
		cout << "Thread id: " <<this_thread::get_id() << endl;
		k++;
	m.unlock();
	cout << "Value of incremented j : " << k  << endl;
}

int main()
{
int i = 10;
//If we do not pass it as reference we may get same result for all thread
thread t1(myfun, std::ref(i));
thread t2(myfun, ref(i));
thread t3(myfun, ref(i));

if(t1.joinable())
	t1.join();

if(t2.joinable())
	t2.join();

if(t3.joinable())
	t3.join();

return 0;
}
