// Initializer list is called even before body of constructor gets executed
// used to initialize constant data members
// Also used to call base class constructor
// Initializie member objects (composition)

#include <iostream>

using namespace std;

class test
{
private:
	const int x;
public:
	test()
	{
		x = 10; // error: assignment of read-only member ‘test::x’
	}
};

int main()
{
	test a;
	return 0;
}

