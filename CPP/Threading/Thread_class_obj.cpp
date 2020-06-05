/** This program will have five thread to add money.
 *  Thread function will be a member of class
 */

#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

class myclass
{
	private:
		int money;
		mutex m;
	public:
		myclass():money(0){}
		int getmoney()
		{
			return money;
		}
		void addmoney(int mny)
		{
			//Add money by incrementing one by one
			m.lock();

			cout << "Addmoney thread :" << this_thread::get_id() << endl;
			for(int i=0; i<mny; i++)
				money++;
			m.unlock();
		}
};

int main()
{
myclass obj;
vector<thread> wthread; // Vector of thread

for(int i=0; i<5; i++)
{
	//Creating thread from class member function
	// Member function of class and obj both needs to 
	// passed by reference
	wthread.push_back(thread(&myclass::addmoney, &obj, 1000));
}

//Join all the thread
for(int j=0; j<5; j++)
{
	wthread.at(j).join();
}

cout << "Money in wallet: " << obj.getmoney() << endl;
return 0;
}
