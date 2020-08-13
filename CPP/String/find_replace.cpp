/** This program search and replace a string in an exiting strig
 */
#include <iostream>
using namespace std;

void find_rep(string &str, string srch, string rep)
{
// Find the first occurance
int pos = str.find(srch);
	while(pos != string::npos)
	{
		// Find and replace the remaining occurance
		str.replace(pos, rep.length(), rep);
		pos = str.find(srch, pos+rep.length());
	}
}

int main()
{
string s = "I go to Library to read Library book";
cout << "Original String; " << s << endl;
// Call serch and replace method
find_rep(s, "Lib" , "Bib");
cout << "String after replacement: " << s << endl;

return 0;
}
