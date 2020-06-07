/* Generate random number 
 */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int random_gen()
{
	return rand()%6;
}

int main()
{
vector<int> vec(10);
generate(vec.begin(), vec.end(), random_gen);

ostream_iterator<int> out(cout, " ");
copy(vec.begin(), vec.end(), out);
cout << endl;
return 0;
}
