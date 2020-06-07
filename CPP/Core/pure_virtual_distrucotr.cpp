/* Preogram to demonstrate pure virtual destructor
 */
#include <iostream>

using namespace std;

class base
{

public:
virtual ~base()=0;
	
};
// "Body of desctructor can not be defined in case of pure virutal destructor"
base::~base()
{
// Empty body will stop inhering class from being abstract
}

class der:public base
{

public:

};

int main()
{
//base obj;
der obj1;

return 0;
}
