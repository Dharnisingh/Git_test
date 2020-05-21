#include <iostream>
#include <fstream>
#include <string>

// istream& getline (istream&  is, string& str, char delim);
// istream& getline (istream&& is, string& str);

using namespace std;

int main()
{
char c;
int count;
string str;
fstream in;
// Open file for writing
in.open("Char.txt", ios::out | ios::trunc);
//Check if file is opend successfully
if(!in.is_open())
	cout << "Error in opening file\n";

while(in)
{
	// Reads a line from std input and write it to str
	getline(cin, str); // Member function of string class
	if(str == "#")
		break;
	in<<str<<endl;
}
in.close();
//Open file for reading 
in.open("Char.txt", ios::in);
// Loop through till end of file is reached
while(!in.eof()) // or while(in)
{
	//Read a charatcter into 'c' from input file stream "in"
	in.get(c);
	cout << c << endl;
	if(c =='\n')
		count++;
}
//Done with reading now close the file
in.close();
cout << "Number of lines = " << count << endl;

return 0;
}
