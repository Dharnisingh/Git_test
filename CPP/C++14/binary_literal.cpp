/* This file demonstrate use of binary literal in c++14
 */
#include <iostream>
using namespace std;

int main()
{
int b = 0b1001; // output 9
int b1 = 0b1001'1001; // output 153
auto b2 = 0b1111;
cout << b << " " << b1 << " " << b2 << endl;
return 0;
}
