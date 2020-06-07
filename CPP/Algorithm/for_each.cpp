/* Program to implement for_each algorithm
 */
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

struct disp 
{
	void operator()(pair<int,int> m)
	{
	cout << m.first << " " << m.second << endl;
	}
}myfunc;

int main()
{
map<int,int> mymap;
mymap.insert(pair<int,int>(1,2));
mymap.insert(pair<int,int>(2,3));
mymap.insert(pair<int,int>(3,4));
mymap[4] = 5;
// Functor myfunc will be applied to each of map object
for_each(mymap.begin(), mymap.end(), myfunc);

return 0;
}
