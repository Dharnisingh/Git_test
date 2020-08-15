#include <iostream>
#include <sstream>
using namespace std;

int main()
{
string s = "Break,This,String, on, Delimeter, as , comma";
string temp;
stringstream ss(s);

while(getline(ss,temp, ','))
{
	cout << temp << endl;
}
return 0;
}
