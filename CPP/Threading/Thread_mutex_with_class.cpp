/* This program implements mutex with class function and object as thread argument
 */ 
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

class wallet
{
	private:
		int money;
		mutex m;
	public:
		wallet():money(0){}
		int getmoney()
		{
			return money;
		}
		void addmoney(int mny)
		{
			//Add money by incrementing one by one
			m.lock();

		cout << "Creating thread :" << this_thread::get_id() << endl;
			for(int i=0; i<mny; i++)
				money++;
			m.unlock();
		}
};

int main()
{
wallet wallobj;
vector<thread> wthread;

for(int i=0; i<5; i++)
{
	//Creating thread from class member function
	wthread.push_back(thread(&wallet::addmoney, &wallobj, 1000));
}

//Join all the thread
for(int j=0; j<5; j++)
{
	wthread.at(j).join();
}

cout << "Money in wallet: " << wallobj.getmoney() << endl;
return 0;
}
