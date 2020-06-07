#include <iostream>

using namespace std;

int main()
{
int x;
int arr[5];

for(int i =0; i<5; i++)
{
	cin >> x;
	arr[i]=x;
}

for(int i=0; i< 5; i++)
	cout << "value = " << arr[i] << endl; 
cout << endl;

return 0;
}
