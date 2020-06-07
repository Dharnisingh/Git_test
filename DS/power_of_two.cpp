/*
 * Program to check if a given number is power of 2
 *
 */

#include <iostream>

using namespace std;


int main()
{
int n;
cout << "Enter number to check power of 2: ";
cin >> n;
// only one bit will be set in case of power of two 
// 2 -- 0010
// 4 -- 0100
// 8 -- 1000
// if we perform & operation with n-1 then it will return in 0
// and for any other number it will never be 0
int res = !((n-1) & n);

cout << "Result = " << res << endl;

return 0;
}
