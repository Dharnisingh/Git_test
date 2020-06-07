/* Program to erase elements from map
 */
#include <iostream>
#include <map>
#include <typeinfo>

using namespace std;

int main()
{
	std::map<int,int> mymap;
	mymap[1] =100;
	mymap[2] =200;
	mymap[3] =300;
	mymap[4] =400;

	std::map<int,int>::iterator it;

	//Erasing by iterator returns void
	it = mymap.find(3);
        auto x = mymap.erase(it) ; //Returns St17_Rb_tree_iteratorISt4pairIKiiEE

	//Erase by key returns number of element erased
	int y = mymap.erase(4);
	cout << "Number of Item deleted = " << y << endl;
	cout << typeid(y).name() << endl;
	

	//Erasing a range return void
	 mymap.erase(mymap.begin(), mymap.begin());
	 cout << "Number of item deleted = " << z << endl;


	for(it=mymap.begin(); it!=mymap.end(); it++)
		cout << "Key = " << it->first << " Value = " << it->second << endl; 

	return 0;
}
