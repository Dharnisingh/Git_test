/* Program to demonstrate how to pass lambda as a thread function.
 */
#include <iostream>
#include <thread>

using namespace std;

int main()
{
int j=10;
//Lambda as thread function with argument j
//J will be accepted in k as thread argument
thread t1([](int k){for(int i=0; i<10; i++) cout << "Executing thread " << k << endl;}, j);

if(t1.joinable())
	t1.join();

return 0;
}
