/* jProgram to implement copy_if algorithm
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
bool comp(int x)
{
	return !(x<0);
}

int main()
{
vector<int> vec {1,-2,3,-4,5,6};
vector<int> res(6);

// iterator will point to the end of the result
auto it = copy_if(vec.begin(),vec.end(), res.begin(), comp);
res.resize(distance(res.begin(), it));  // shrink container to new size

ostream_iterator<int> out (cout, " ");
copy(res.begin(),res.end(), out);
cout << "\nCapacity of result = " << res.capacity() << endl;
return 0;
}
