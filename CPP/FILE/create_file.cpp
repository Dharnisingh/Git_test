#include <iostream>
#include <fstream>

using namespace std;

int main()
{
char c;
ofstream file;
string fname, str;
cout << "Enter File Name: ";
cin >> fname;

file.open(fname.c_str(), ios::out | ios::trunc);
//Check if file was opened successfully
if(!file.is_open())
{
	cout << "Failure\n";
}
//Clear the input buffer
cin.ignore();
while(1)
{
	// Reads a line from std input to the string buffer
	getline(cin, str);
	//Read until # is entered from keyboard
	if(str=="#")
		break;
	//Write content to the file
	file << str << str;

}


file.close();


return 0;
}
