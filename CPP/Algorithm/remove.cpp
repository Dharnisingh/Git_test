/* Program to remove elements from vector using remove algorithm
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
vector<int> vec = {2,1,4,8,5,9};
//"it does not actually removes the velue just escape the value and copy rest of the value as it is"
auto it = remove(vec.begin(), vec.end(), 4);
// Range based for loop
for(auto it : vec)
	cout << "Value = " << it << endl; 

return 0;
}
