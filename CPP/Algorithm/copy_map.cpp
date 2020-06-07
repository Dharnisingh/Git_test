/* Program to copy map using copy algorithm
 */
#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;

int main()
{
map<int, string> mymap = {{4,"A"},{1,"B"},{3,"C"},{2,"D"}};

map<int, string> mycopy;

copy(mymap.begin(), mymap.end(), inserter(mycopy, mycopy.end()));

for(auto x: mycopy)
	cout << x.first <<" " << x.second << endl;


return 0;
}
