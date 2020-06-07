/* Program to implement virtual destructor
 */
#include <iostream>
#include <vector>

using namespace std;


class base
{
int a;

public:
virtual ~base(){}
};

int main()
{
base b;

return 0;
}
