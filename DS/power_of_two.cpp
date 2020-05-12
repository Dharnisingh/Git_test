#include <iostream>

using namespace std;

int main()
{
int n;

cout << "Enter the number to check power of two: ";
cin >> n;
// "N =8 = 1000 N-1 = 7 = 0111"
if(n & (n-1))
	cout << "Not Power of two\n";
else
	cout << "Power of two\n";

return 0;
}
