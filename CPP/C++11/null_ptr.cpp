/** This program demonstrate use of nullptr in c++11
 */

#include <iostream>
using namespace std;

void fun(int x)
{
	cout << x << endl;
}

void fun(char *x)
{
	cout << "Null PTR" << endl;
}

int main()
{
	int x = NULL;
	cout << "Success x: " << x << endl;
	// Gives just warning
	fun(x);
	// calls fun(char *x)
	fun(nullptr);
	// Compile time error ambiguos call
	//fun(NULL);
	return 0;
}
