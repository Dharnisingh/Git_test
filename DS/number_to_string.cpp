#include <iostream>

using namespace std;

string numtostr(int num)
{
string st;
int n, r;
auto it = st.begin();

	while(num>0)
	{
		r = num%10; 
		num = num/10;
		//Add 48 to an integer value to convert it to the ASCII
		it = st.insert(it,r+48); //insert in the begining
	}

return st;
}


int main()
{
string obj = numtostr(123);
cout <<  obj <<endl;

return 0;
}
