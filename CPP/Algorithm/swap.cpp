#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
vector<int> vec1(5,10);
vector<int> vec2(10,20);
ostream_iterator<int> out(cout, " ");
//Swap the content of vec1 with vec2
//will also change the size and capacity
swap(vec1,vec2);

cout << "Size of Vector 1 after swap:" << vec1.size() << " "<<  vec1.capacity() << endl;
copy(vec1.begin(),vec1.end(), out);
cout << endl;

cout << "Size of Vector 2 after swap:" << vec2.size() << " "<< vec2.capacity() << endl;
copy(vec2.begin(),vec2.end(), out);
cout << endl;
return 0;
}
