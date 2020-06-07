/** This program reads file line by line
 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
char str[100];
cout << "Enter your full name: ";
// Read string line of length 20 from standard input stream
cin.getline(str, sizeof(str));
cout << str << endl;
// Open file using constructor method
fstream in_file("my_file.txt", ios::in);
while(!in_file.eof())
{
	// This method ignores '\n' character so we need to add it after each read
	in_file.getline(str,100);
	cout << str << endl; // Add new line as it was ignored while reading
}
in_file.close();
return 0;
}
