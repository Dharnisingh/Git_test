#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
string str;
cout << "Enter String: ";
cin >> str;
int count =0;
unordered_map<char, int> um;
for(char ch: str)
{
	//if same key occurs again increment the count
	um[ch]++;
}

for(char ch: str)
{
	if(um[ch] == 1)
	{
		cout << "First occurance: " << ch << endl;
		break;
	}

}

for(auto it: um)
{

	cout << it.first << " " << it.second << endl;
}
return 0;
}
