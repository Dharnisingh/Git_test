/* Proram to implement remove object from list
 */
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
list<int > lst = {1,4,8,1,1,4,1,9,7};
cout << "Before Removal:\n";
//Range based for loop
for(auto i: lst)
	cout << "Value = " << i << endl;
//"We should not use this"
//auto it = remove(lst.begin(), lst.end(), 1);
// 1: It will not reduce the size of list coz it just sifts the unremoved items to the begining.
lst.remove(1);
cout << "After Removal:\n";
for(auto i: lst)
	cout << "Value = " << i << endl;

return 0;
}
