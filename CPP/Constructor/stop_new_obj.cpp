/* Program to stop object createion on heap using new operator
 */
#include <iostream>

using namespace std;

class x
{
private:
	// Will not allow object creation on heap
	void *operator new(size_t a)
	{
		cout << "New Constructor overload\n";
		return new x*;
	}

	int y;

public: 
	
	//It will work here
	/*
	void *operator new(size_t a)
	{
		cout << "New Constructor overload\n";
		return new x*;
	}
	*/
	x()
	{
		cout << "Constructor\n";
	}
};

int main()
{
x* obj = new x;

return 0;
}
