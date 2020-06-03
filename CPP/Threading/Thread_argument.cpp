#include <iostream>
#include <thread>

using namespace std;

//Function will update the value of passed argument..
void callme(int *p)
{
	cout << "Inside thread callme: " << this_thread::get_id() << endl;
	*p=*p+1;
}

//Argument can also be passed as reference.
void refcall(const int & ref)
{
	int & i = const_cast<int &>(ref);
	i++;
	cout << "Inside thread refcall: " << this_thread::get_id() << endl;
}

int main()
{
int val = 10;
int ref_val =10;

thread t1(callme, &val);
// if std::ref() is not used then it will be passed as value
thread t2(refcall, std::ref(ref_val));

if(t1.joinable())
	t1.join();

if(t2.joinable())
	t2.join();
// Val will be updated by thread function callme.
cout << "Value of val after thread execution: " << val << endl;
cout << "Value of ref_val after thread execution: " << ref_val << endl;

return 0;
}
