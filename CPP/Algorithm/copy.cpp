/* Program to implement copy algorithm
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
vector<int> vec {1,2,3,4,5,6};
vector<int> res;
res.reserve(6);

// iterator will point to the end of the result

// This code will show size of result vector as zero 
//auto it = copy(vec.begin(),vec.end(), res.begin());

auto it = copy(vec.begin(),vec.end(), back_inserter(res));

ostream_iterator<int> out (cout, " ");
copy(res.begin(),res.end(), out);

cout << "\nSize of Result vector: " << res.size() << endl;
cout << endl;
return 0;
}
