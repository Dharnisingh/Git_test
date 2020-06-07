/* Assignment of vector using assignment operator
 */
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
vector<int> vec1(10,100);
vector<int> vec2(5,50);

ostream_iterator<int>out(cout, " ");
vec1 = vec2;

cout << "Vector 1 = ";
copy(vec1.begin(), vec1.end(), out);
cout << endl;

cout << "Vector 2 = ";
copy(vec1.begin(), vec1.end(), out);
cout << endl;

return 0;
}
