#include <iostream>
#include <map>

using namespace std;

int main()
{
map<int, map<int, string> > nested_map;
map<int, map<int, string> >::iterator itr;

nested_map[0][0] = "Dharni";
nested_map[0][1] = "Works";
nested_map[0][2] = "at";
nested_map[0][3] = "L&T";


cout << nested_map[0][0] << " ";
cout << nested_map[0][1] << " ";
cout << nested_map[0][2] << " ";
cout << nested_map[0][3] << " " << endl;

return 0;
}
