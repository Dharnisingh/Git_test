/** Program to convert into lower case string
 *//
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
string s= "All word in THIS string shoLD be Converted to THE lower CASE";
// Convert the string to lower case
transform(s.begin(), s.end(), s.begin(), ::tolower);
cout << "Lower case string: \n" << s << endl;

return 0;
}
