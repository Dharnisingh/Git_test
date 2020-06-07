/* Program to demonstrate that we can not modify contents of associative
 * container using iterator because by doin this we might disturb the data structure.
 */
#include <iostream>
#include <set>
using namespace std;

int main()
{
set<int> myset = {7,3,8,1,0,4};
set<int>:: iterator it;

it = myset.begin();
// "We can not modifiy contents of ordered associative container"
//*it = 10;

it ++;
cout << *it << endl;

return 0;
}
