/* Program to implement static_cast
 */
#include <iostream>

using namespace std;

int main()
{
int x =10;
char *c = (char*)&x;
cout << *c << endl;
return 0;
}
