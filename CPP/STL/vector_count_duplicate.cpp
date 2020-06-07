/* Count duplicate elements in vector
 */
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
vector<string> vec{"Hi","How","Are","How","Hi","Are","How","Hi","Hi", "you"};
map<string, int> dict;

for(auto it=vec.begin(); it!=vec.end(); it++)
{
	auto mit = dict.insert(make_pair(*it,1));
	if(mit.second == false)
		mit.first->second++;
}


for(auto x: dict)
{
	cout << x.first <<" " << x.second << endl;
}

return 0;
}
