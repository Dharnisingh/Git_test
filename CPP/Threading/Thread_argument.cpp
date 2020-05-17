#include <iostream>
#include <thread>

using namespace std;

//Function will update the value of passed argument..
void callme(int *p)
{
	cout << "Inside thread: " << this_thread::get_id() << endl;
	*p=*p+1;
}

//Argument can also be passed as reference.
void refcall(const int &rf)
{
	cout << "Inside thread: " << this_thread::get_id() << endl;

}

int main()
{
int val = 10;
int ref_val =10;

thread t1(callme, &val);
thread t2(refcall, ref_val);

if(t1.joinable())
	t1.join();

if(t2.joinable())
	t2.join();
// Val will be updated by thread function callme.
cout << "Value after thread execution: " << val << endl;
cout << "Value after thread execution: " << ref_val << endl;

return 0;
}
