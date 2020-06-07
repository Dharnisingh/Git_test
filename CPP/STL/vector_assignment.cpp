/* Onve vector is assigned to another to see the effcet
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> vec = {1,2,4,5};
vec.push_back(6);
vector<int> vec1 = {2,3};
// Contents will be replaced but capacity will be unchanged
vec = vec1;

cout << "Size of vec = " << vec.size() << "Capacity of vec = " << vec.capacity() << endl; 

return 0;
}
