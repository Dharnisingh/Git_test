/* Program to allocate memory for 2d Array
 */

#include <iostream>

using namespace std;

int main()
{
int row = 3;
int col = 4;
//Allocate memory for row
int ** mem = (int**) malloc(row*sizeof(int));
//Allocate memory for column
for(int i =0; i<3; i++)
{
	mem[i] = (int *) malloc(col* sizeof(int));
}

mem[0][1] = 10;
mem[0][2] = 20;

cout << mem[0][1] << " " << mem[0][2] << endl;

return 0;
}
