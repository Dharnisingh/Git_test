/* Program to remove duplicate elements from list using set
 */
#include <iostream>
#include <algorithm>
#include <list>
#include <set>

using namespace std;

int main()
{
list<int> lst {1,2,1,3,2,4,5,7,4,6};
// Set will hold only unique elements
set<int> st(lst.begin(),lst.end());

for(auto it:st)
	cout << "Value of set: " << it << endl; 

cout << endl;



return 0;
}
