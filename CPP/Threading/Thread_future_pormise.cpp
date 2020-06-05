/* This program demonstrate implementation of future an pormise concept
 * Used when we want a thread to stop when it is done with its task
 */

#include <iostream>
#include <thread>
#include <future>
#include <climits> // for MAX_INT

using namespace std;

void findodd(promise<int> &&oddsumpromise, int start, int end)
{
	int oddsum =0;
	cout << "Thread started: \n";
	for(int i=start; i<=end; i++)
	{
		if(1&i)
			oddsum+=i;
	}
	//Set the value in promise
	oddsumpromise.set_value(oddsum);
	cout << "Exting from thread\n";
}

int main()
{
int start =0, end=10000;

// Create a std::promise object
std::promise<int> oddpromise;
//Fetch std::future object associated with promise
std::future<int> oddfuture = oddpromise.get_future();

cout << "Creating thread: \n";
std::thread t1(findodd, std::move(oddpromise), start, end);

cout << "Waiting for result: \n";

cout << "Odd sum: " << oddfuture.get() << endl;

t1.join();
return 0;
}
