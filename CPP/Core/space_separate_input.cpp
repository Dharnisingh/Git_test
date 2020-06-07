/* Program to take impute separated by space
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string str;
	string word;
	cout << "Enter space separated input: ";
	//Read input from keyboard and put into string
	getline(cin,str);
	stringstream ss(str);
        int i = 0;
	while(ss>>word)
	{
		//convert string to int
		if(atoi(word.c_str()))
		{
			cout << "Argument = " << word << endl;
			i = atoi(word.c_str());
		}
	}

return 0;
}
