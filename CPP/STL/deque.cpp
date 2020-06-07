/* program to implement deque
 */
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;


int main()
{
deque<int> mydeque = {1};
cout << mydeque[0] << endl;

cout << "Sizeof deque = " << sizeof(mydeque) << endl;
return 0;
}
