#include <iostream>
#include <typeinfo>
#include <sstream>
using namespace std;

int main()
{
string s = "123 456 7 89 10 1 2 5";
stringstream ss(s);
string tmp;
int count=0;
while(getline(ss, tmp, ' ' ))
{
	cout << tmp << endl;
	int x = atoi(tmp.c_str()) ;
	count+=x;
	cout << "Sum " << count << endl;
}
return 0;
}
