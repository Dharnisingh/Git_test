/* Implementation of set
 */
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;
class comp
{
	public:
		bool operator()(int i, int j)
		{
			cout << "Calling less than\n";
			return i > j; 
		}
};

int main()
{
set<int, comp> myset = {3,2,5,1,0,9,11};
//Returns a pair<>
pair<set<int>::iterator ,bool> p;
p = myset.insert(13);

if(p.second == true)
	cout << "Value inserted\n";

ostream_iterator<int> out(cout, " ");
copy(myset.begin(), myset.end(), out);
return 0;
}
