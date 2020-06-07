/* Program to demonstrate deep copy
 */
#include <iostream>
#include <vector>

using namespace std;

class person
{
string* pname;
	
public:
	person(string name)
	{
		pname = new string(name);
	}
	~person()
	{
		delete pname;
	}
void print_name()
{
	cout << *pname << endl;
}
};

int main()
{
vector<person> pvec;

// Persong will be created on stack
pvec.push_back(person("Dharni"));

pvec.back().print_name();

return 0;
}
