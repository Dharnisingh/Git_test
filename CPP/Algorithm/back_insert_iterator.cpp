/* Program to demonstrate implementation of back_inserter
 test change*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


int main()
{
vector<int> v;

cout << "Enter int value to beinserted into vector and any characther value to stop input:\n";
// if cank_inserter is not used size of vector will bw displayed as zero
copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v));
cout << "Size of vector :" << v.size() << endl;
ostream_iterator<int> out(cout , " ");

copy(v.begin(), v.end(), out);
cout << endl;
return 0;
}

/*
 * OUTPUT: 
 * Enter int value to beinserted into vector and any characther value to stop input:
5 4 3 6 7 1 9 2 k
Size of vector :8
5 4 3 6 7 1 9 2
*/
