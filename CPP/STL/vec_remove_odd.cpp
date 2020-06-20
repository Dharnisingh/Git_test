/* This program generate a verctor of 100 int values and removes all odd intergers from it.
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
vector<int> vec(100);

// Generate 100 int
generate(vec.begin(), vec.end(), [](){ static int i =0; return ++i;});

cout << "Vector contents: \n";
for(auto x: vec)
	cout << x << " ";
cout << endl;

cout << "Removing odd numbers:\n";

// remove algo does not removes the value from vector it brings the non removed elements to the begining
// and leave the rest as it is.
// To remove elements from vector use erase method just after remove algo.
auto it = remove_if(vec.begin(), vec.end(), [](int x){ return (1&x)? true: false;} );
 vec.erase(it, vec.end());

cout << "Vector after removing elements:";
for(auto it: vec)
	cout << it << " ";
cout << endl;


return 0;
}
