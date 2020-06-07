/* Erase elements from vector
 */
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vec;
    vector<int>::iterator it;
    int N;
    string str;
    int i; // index to be deleted
    int a,b ;// range to be deleted
    int num = 0;
    string word;
  
    //Number of element in vector
    cout << "Number of Elements: " ;
    cin >> N;
    //Value to be inserted in verctor
    if(N>=0 && N<= 1000000)
    {
	cout << "Enter space saperated: ";
	cin.ignore(); // This is Important else getline would not stop for input         
	getline(cin, str);
	//cin >> str;
	stringstream ss(str);
        while (ss>>word)
	{
       		if(atoi(word.c_str()))
		{
			num = atoi(word.c_str());
			vec.push_back(num);
       		}
	}
    
    }
    //index to be deleted
    cin >> i;
    if(vec.size()>0)
    {
    	vec.erase(vec.begin()+i);
    }
    // range to bedeleted
    cout << "Enter range (two values) to be deleted separated by space: ";
    cin >> a >> b;
    if(vec.size() > b-1)
    {
    	vec.erase(vec.begin()+a, vec.begin()+b);
    }

    cout << vec.size() << endl;
    for(it = vec.begin(); it!= vec.end(); it++)
        cout << *it << " ";



    return 0;
}
