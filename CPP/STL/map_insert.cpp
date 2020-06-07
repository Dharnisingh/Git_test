/*Program to insert elements in map
 */
#include <iostream>
#include <map>

using namespace std;

int main()
{
map<char, int> mymap = {{'c',0}, {'a',0}};
map<char, int>::iterator itr;
pair<map<char, int>::iterator, bool> ret_val;
mymap['d'] = 0;
mymap['d'] = mymap['d'] + 1; // If same key increment count

// Value insertion
ret_val = mymap.insert(make_pair('e',0));
if(ret_val.second == true)
	cout << "Value Inserted successfully\n";
else
	cout << "Failure\n";


itr = mymap.find('d');
itr = mymap.insert(itr, make_pair('f',1));
cout << "Value of itr returned by insert: " << itr->first << " " << itr->second << endl;

cout << "Contents of Map: \n";
for(auto it: mymap)
	cout << "Key = " << it.first << " " << it.second << endl; 

return 0;
}
