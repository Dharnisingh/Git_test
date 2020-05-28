/** This program will place the value present in arry to their correct index
 * i.e 6 will be placced at 6 th index
 */
#include <iostream>

using namespace std;

int main()
{
int arr[10] = {6,8,5,9,0,1,4};

int temp;

for(int i=0; i<10; i++)
{
	while(true)
	{
		// If value is equal to the index or value is zero
		// then break the loop
		if(arr[i] == i || arr[i]==0)
			break;
		// swap the contents till value is equal to index
		temp = arr[i];
		arr[i] = arr[temp];
		arr[temp] = temp;
	}
}

for(auto it: arr)
	cout<< it << endl;

return 0;
}
