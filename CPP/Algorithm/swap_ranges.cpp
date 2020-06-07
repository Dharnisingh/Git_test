/* Program to swap range
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
vector<int> v1(5,10);
vector<int> v2(10,20);
ostream_iterator<int> out(cout, " ");
swap_ranges(v1.begin()+1,v1.end(), v2.begin()+2);

cout << "Vector 2 after swap; ";
copy(v1.begin(), v1.end(), out);
cout << endl;
cout << "Vector 1 after swap; ";
copy(v2.begin(), v2.end(), out);
cout << endl;
return 0;
}
