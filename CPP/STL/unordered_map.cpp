/* Program to implement unordered map
 */
#include <iostream>
#include <unordered_map>

using namespace std;


int main()
{
unordered_map<char, int> ump;

ump.insert(make_pair('a',1));
ump.insert(make_pair('b',2));
ump.insert(make_pair('c',3));
ump.insert(make_pair('d',4));

ump['e'] = 5;

for(auto &it: ump)
	cout << it.first << " " << it.second << endl;

return 0;
}
