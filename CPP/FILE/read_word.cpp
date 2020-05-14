#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
fstream inf, of;
string str;

inf.open("out.txt",ios::out | ios::app);
cout << "Write contents to file:\n";
while(inf)
{
	getline(cin,str);
	if(str == "#")
		break;
	inf << str << endl;
}
inf.close();

cout << "Read contents from file by word:\n";
inf.open("out.txt", ios::in);

//Reads one word from file to str till reaches eof
while(inf>>str)
{
	cout << str << endl;
}

inf.close();
return 0;
}

