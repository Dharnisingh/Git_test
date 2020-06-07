/*Program to demonstrate virtual inheritance
 */
#include <iostream>

using namespace std;

class dog
{
public:
	virtual void bark() = 0; // inherits interface obly
	void run( ) {cout << "I am runnig \n";} // inherits interface and implementation both
	virtual void eat(){ cout << "I am eating\n";} //inherits interface and default.
protected:
	void sleep(){cout << "I am sleeping";} // will be inherited but implementation obly
};

class yellowdog: public dog
{
	public:
	virtual void bark(){cout << "I am yellodog\n";}
        //void sleep() {cout << "Yellowdog sleep\n";}

};

int main()
{
yellowdog mydog;

mydog.bark();
mydog.eat();
mydog.run();

//mydog.sleep(); 
return 0;
}
