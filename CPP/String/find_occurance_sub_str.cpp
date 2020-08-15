/** PProgram to find all the sub string in a given string
 */
#include <iostream>
using namespace std;

int main()
{
string s = "Find all the red apple looks red and put them into red plate";
string sub = "red";
size_t pos = s.find(sub);
while(pos != string::npos)
{
	cout << sub << " Found at " << pos << endl;
	pos = s.find(sub, pos+1);
}
return 0;
}
