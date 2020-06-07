/* Program to implement how to take space separated input
 */
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string buff;
	cout << "Enter space saparated input: ";
	//Get the input from keyboard. We can also specify delimeter as third argument. 
	getline(cin,buff);

	string str;
	stringstream ss(buff);
	// Loop through all the input
	while(ss >> str)
	{
		cout << str << endl;
	}

	return 0;
}
