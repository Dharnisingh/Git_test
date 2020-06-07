/*Program to find element in map
 */
#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>

using namespace std;

template<class T>
void print(T begin, T end)
{
	while(begin != end)
	{
		cout << "Key = " << begin->first << " Value = " << begin->second << endl; 
		begin++;
	}	
}

int main()
{
map<int, string> mymap;
ostream_iterator<int> out(cout, " ");
mymap[0] = "Dharni";
mymap[1] = "Shyam";
mymap[2] = "Ramesh";
mymap[3] = "Ganesh";

mymap.insert(pair<int,string>(4,"Lala"));
mymap.insert(make_pair(5,"Suresh"));


print(mymap.begin(), mymap.end());

cout << "Value to be found is : 5 \n" ;
auto it = mymap.find(5);
if(it->first == 5)
	cout << "Value found: " << mymap[5] << endl;

cout << "Value to be found is 9 \n";
it = mymap.find(9);
if(it != mymap.end())
	cout << "Value Found\n";
else
	cout << "Value NOT found\n";


return 0;
}
