/*Count the occurance of chartcter in map
 */
#include <iostream>
#include <map>

using namespace std;

int main()
{
map<char, int> mymap;
string str;
cout << "Enter the string: ";
cin>> str;

// Key as character and count as value
// If key occures again increment the count
for(int i=0; i<str.length(); i++)
	mymap[str[i]]++;

cout<<"Content of map:\n";
for(auto it: mymap)
	cout << it.first << " " << it.second << endl;
return 0;
}
