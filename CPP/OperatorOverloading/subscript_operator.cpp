/* Operator[] must be a member function
 * returns a reference from this operator
 */
#include <iostream>
using namespace std;
const int SIZE = 10;

class subscript
{
	private:
		int arr[SIZE];
	public:
		subscript()
		{
			//Initialize thi arry
			for(int i=0; i<SIZE; ++i)
				arr[i] = i;
		}
		//Overloade subscript operator[]
		int& operator[](int index)
		{
			//Boundry check
			if(index > SIZE)
			{
				cout << "Index out of bound ";
				return arr[0];
			}
			//return correct value
			return arr[index];
		}
};

int main()
{
subscript sub;
//Access the value using overloaded subscript operator
cout << "Value of sub[0] " << sub[0] << endl;
cout << "Value of sub[1] " << sub[1] << endl;
cout << "Value of sub[3] " << sub[3] << endl;
cout << "Value of sub[9] " << sub[9] << endl;
//Out of bound case
//Will print 0th index value
cout << "Value of sub[11] " << sub[11] << endl;
return 0;
}
