/* Program to find sub array with maximum sum
 */
#include <iostream>

using namespace std;

int sub_array(int arr[], int s)
{
	int asum = 0;
	int psum = 0;
	int ret =0;
	
	for(int i=0; i<=s-3; i++)
	{
		asum = 0;
       		for(int j=i; j<i+3; j++ )
		{
			asum = asum+arr[i];
		}
		cout << "Asum: " <<  asum << " OldSum: " << psum << " i = "<< i<<  endl;	
		if(asum > psum)
		{
	        	psum = asum;
			ret = i;
			cout << "Ret " << ret << endl;
		}
	}
return ret;
}

int main()
{
int s;
cout << "Enter size of array: ";
cin >> s;

cout << "Enter " << s << " Elements: ";
int arr[s];
for(int i=0; i<s; i++)
	cin >> arr[i];

s = sub_array(arr, s);

cout << "Max value starts from " << s << endl;
return 0;
}
