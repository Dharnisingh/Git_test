/*Sub string
 */
#include <iostream>
#include <string>

using namespace std;


int main()
{
string str = "Great world of Sport";

// Return string after 7th positioin
string s = str.substr(7);

cout << s << endl;

// Return string after 5th of size 3 character
s = str.substr(6,3);

cout << s << endl;

return 0;
}
