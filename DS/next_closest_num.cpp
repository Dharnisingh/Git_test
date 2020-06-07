/** This program will find the closest number given by the user from sorted array
 */

#include <iostream>

using namespace std;

int main()
{
int arr[10];
cout << "Enter 10 elements: ";
for(int i=0; i<10; i++)
	cin >> arr[i];
cout << "Enter number to find closest of: ";
int num, close;
int val, val1;
int temp;
cin >> num;

for(int i=0; i<10; i++)
{
	if(arr[i]<=num)
		close = arr[i];
	if(arr[i]>=num)
	{
		temp = arr[i];
		cout << "Temp " << temp << endl;
		break;
	}
}

val = num - close;
val1 = temp - num;

cout << val << " " << val1 << endl;
if(val<val1)
	close = close;
else
	close = temp;
cout << "Closest number : " << close << endl;
return 0;
}
