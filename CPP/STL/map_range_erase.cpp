/* Program to erage a range of elements from map
 */
#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
map<int,int> mymap ={{1,2},{3,4},{5,6},{7,8},{9,10},{11,12},{13,14}};

ostream_iterator<int> out(cout, " ");

cout << "Map befor deleting: " ;
for(auto it : mymap)
	cout << it.first << endl;

mymap.erase(mymap.begin(), mymap.beginno match for ‘operator=’());

cout << "Map after deleting: " ;
for(auto it : mymap)
	cout << it.first << endl;
return 0;
}
