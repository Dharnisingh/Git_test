#include <iostream>

using namespace std;

int find_pos(int *arr, int val)
{
int pos = -1;
int i;
	for(i=0; i<10; i++)
	{
		if(arr[i] == val)
		{
			pos = i;
			cout << "Position of " << arr[i] << " Found at " << i << endl;
			return pos;
		}
	}
return pos;
}

int main()
{
// Arrange the elements in array according to their index
// ie 5 will come to 4 th index instead 0.
int arr[10] = {5,8,1,6,0,4,9};
int i;
int j;
int temp;
for(i=0; i< sizeof(arr); i++)
{
	j = find_pos(arr, i);
	if(j == -1)
		continue;
	else
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	cout << "Calling Swap of " << temp  << " And " << arr[i] << " i ="<< i <<endl;
	}
}

for(i=0; i<10; i++)
{
	cout << arr[i] << " ";
}
cout << endl;
return 0;
}
