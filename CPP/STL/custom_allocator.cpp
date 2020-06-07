/* Program to implement custor allocator
 */
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
struct myalloc:allocator<T>
{
	T* allocate(size_t size)
	{
		// This is not getting printed we need to user "rebind"
		cout << "Allocate requested size: " << size << endl;
		return new T[size];
	}
};

int main()
{
vector<int, myalloc<int> > v1;
v1.push_back(10);

for(auto &i: v1)
	cout << i << endl;
return 0;
}
