#include <iostream>

using namespace std;

#define TRACE(ARG) std::cout << #ARG << std::endl; ARG

#define DBGMSG( os, msg ) \
  (os) << "DBG: " << __FILE__ << "(" << __LINE__ << ") " \
       << msg << std::endl

int main()
{
int x = 10;

TRACE(x);
TRACE(for(int i = 0; i < 100; i++)); // Display as it is
DBGMSG( cout, "Value of x " << x << ", address of x is " << &x );
return 0;
}
