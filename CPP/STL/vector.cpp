/* Vector suing initlialize list
 */
#include <iostream>
#include <map>

using namespace std;

int main()
{
map<int, string> mymap = {{3,"Raam"},{1,"Shyam"},{7,"Ganesh"},{4,"Suresh"}};

for(auto it: mymap)
	cout << it.first << endl;

return 0;
}
