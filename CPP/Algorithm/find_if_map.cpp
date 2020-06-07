#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

struct search
{
	bool operator()(pair<int, int> p)
	{
		if(p.first == 2)
			return true;
		return false;
	}
}srch;

int main()
{
map<int, int> mymap = {{1,2},{3,4},{5,6},{2,3}};
mymap.insert(pair<int,int>(6,7));
mymap.insert(make_pair(7,8));
mymap[9]=10;

auto it = find_if(mymap.begin(),mymap.end(), srch);
if(it!=mymap.end())
	cout << it->first << endl;

return 0;
}
