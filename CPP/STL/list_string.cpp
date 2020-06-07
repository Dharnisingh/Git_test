/* Program to implementation of list of string
 */
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

template<class T>
void print(list<T> &l)
{
	for(auto it = l.begin(); it!=l.end(); it++)
		cout << *it << endl;
}

int main()
{
list<string> str = {"Raam", "Shyam"};
str.push_back("Mohan");
str.push_front("Soham");

str.insert(str.begin(),"Raman");
str.insert(str.begin(), str.begin(),str.end());

// Sort the elements in list
str.sort();

//Remove consecutive duplicate elements
auto it = unique(str.begin(), str.end());

// Erase the left out element after removing dupilcate elements
str.erase(it,str.end());

//Print the entire list
print(str);

return 0;
}
