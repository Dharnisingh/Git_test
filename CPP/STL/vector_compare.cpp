/*Compare the vectors using == operator
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
vector<int> vec1 {1,3,2,4,5};
vector<int> vec2 {1,3,2,4,5};
vector<int> vec3 {4,3,2,1,5};

//Compare each element of vector with second vector
if(vec1 == vec2)
	cout << "Equal\n";

//Compare using algorithm
bool b = equal(vec1.begin(), vec1.end(), vec2.begin());
if(b)
	cout << "Equal\n";
return 0;
}
