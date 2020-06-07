/* Multimap implementation
 */
#include <iostream>
#include <map>

using namespace std;

int main()
{
multimap<char, int> multim = {{'a',10}, {'a',20}};

multim.insert(make_pair('b',10));
multim.insert(make_pair('c',20));
multim.insert(make_pair('c',10));
multim.insert(make_pair('a',30));
multim.insert(make_pair('a',30));
multim.insert(make_pair('b',30));
multim.insert(make_pair('c',30));
multim.insert(make_pair('a',40));
multim.insert(make_pair('a',50));
multim.insert(make_pair('h',10));
multim.insert(make_pair('d',20));
multim.insert(make_pair('e',50));


pair< multimap<char, int>::iterator, multimap<char,int>::iterator > ret;

cout << "Multimap display occurance of each key uniquely with their vlues: \n";
for(char ch='a'; ch<='e'; ch++)
{
	ret = multim.equal_range(ch);
	cout << ch << "==> ";
	for(auto it = ret.first; it!=ret.second; it++)
		cout <<	it->second << " ";
	cout << endl;
}

return 0;
}
