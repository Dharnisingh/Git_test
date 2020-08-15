/** Erase substring or character from a specified string
 */
#include <iostream>
using namespace std;

int main()
{
string s = "Hello I am test string pic a word or char to remove from me";
// erase from 7th position 10 characters
string temp = s.erase(7,10);

cout << "Original String: \n" << s << endl;
cout << temp << endl;
// erase range 
auto it = temp.erase(temp.begin(), temp.begin()+5);
cout << temp << endl;

return 0;
}
