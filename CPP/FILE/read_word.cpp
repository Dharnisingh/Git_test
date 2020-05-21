#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
fstream inf, of;
string str;
// Open file for writing using member function "open"
inf.open("out.txt",ios::out | ios::app);
cout << "Write contents to file:\n";
while(inf)
{
	// string class member function reads from std input 
	// and write to string object till new line is reached
	getline(cin,str);
	if(str == "#")
		break;
	inf << str << endl;
}
inf.close();

cout << "Read contents from file by word:\n";
// Open file fro reading
inf.open("out.txt", ios::in);

//Reads one word separeted  by space from file to str till reaches eof
while(inf>>str)
{
	cout << str << endl;
}

inf.close();
return 0;
}

