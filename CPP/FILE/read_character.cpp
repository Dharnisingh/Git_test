#include <iostream>
#include <fstream>

using namespace std;

int main()
{
char c;
int count;
string str;
fstream in;
in.open("Char.txt", ios::out | ios::trunc);
while(in)
{
	getline(cin, str);
	if(str == "#")
		break;
	in<<str<<endl;

}
in.close();

in.open("Char.txt", ios::in);
while(!in.eof())
{
	//Read by character
	in.get(c);
	cout << c << endl;
	if(c =='\n')
		count++;
}
in.close();
cout << "Number of lines = " << count << endl;
return 0;
}
