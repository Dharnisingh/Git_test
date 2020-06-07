/* Find substring
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
string str = "Hello I will say gaHello again say me meHello back";

// Returns the postion of string found
size_t found = str.find("Hello");

// Loop through till end of string is reached
while(found != string::npos)
{
	cout << "occurance of sting " << "Hello " << found << endl;
	found = str.find("Hello", found+1);
}

return 0;
}
