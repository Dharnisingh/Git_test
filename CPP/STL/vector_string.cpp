/* Vector of string
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct comp
{
   bool	operator()(string n1, string n2)
	{
		cout << "I am called\n";
		return (n1<n2);
	}
};
//COpy all the unique names to a new vector
int main()
{
vector<string> name1 = {"Raam", "Shyam", "Ramesh", "Ganesh","Naresh"};
vector<string> name2 = {"Shyam", "Raam", "Naresh", "Krish"};
vector<string> temp;
temp.reserve(10);

copy_n(name1.begin(),name1.size(), back_inserter(temp));
copy(name2.begin(),name2.end(), back_inserter(temp));

sort(temp.begin(),temp.end());

cout << "capacity =" << temp.capacity() << endl;
auto it = unique(temp.begin(),temp.end());
temp.erase(it, temp.end());

for(auto it : temp)
	cout<<it<< endl;


return 0;
}
