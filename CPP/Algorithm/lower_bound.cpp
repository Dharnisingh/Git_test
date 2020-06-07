/* Program to implement lower_bound algorithm
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
vector<int> vec = {10,11,20,20,20,30};

auto it = lower_bound(vec.begin(), vec.end(), 20);

cout << "Value at lower bound =" << *it << endl;

it = upper_bound(vec.begin(),vec.end(), 20);
cout << "Value at upper bound =" << *it << endl;

return 0;
}
