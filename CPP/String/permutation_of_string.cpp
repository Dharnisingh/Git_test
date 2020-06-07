/* Permutation of string
 */
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter string to permute: ";
    cin >> str;
    int count =0;
    std::string s(str);
    do
    {
        std::cout << s << "\n";
	count++;
    }
    //Find the permutation
    while ( std::next_permutation(s.begin(), s.end()) );
    cout << "Total permutation = " << count << endl;
return 0;
}
