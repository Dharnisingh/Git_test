// inserting into a list
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main ()
{
  std::list<int> mylist;
  std::list<int>::iterator it;

  // set some initial values:
  for (int i=1; i<=5; ++i) mylist.push_back(i); // 1 2 3 4 5

  it = mylist.begin();
  ++it;       // it points now to number 2           ^

  auto itr = mylist.insert (it,10);                        // 1 10 2 3 4 5
    cout << "Instertd " << *itr << endl;
  
  std::cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
