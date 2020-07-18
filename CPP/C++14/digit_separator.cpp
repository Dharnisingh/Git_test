/* This program demonstrate use of digit separator
 * There is no rule specified that where these separator will be  used
 * Signgle quotation(') is sued to separate the digits
 * Provide better redability of decimal digits
 */

#include <iostream>
using namespace std;

int main()
{
int dec_val = 1'505; // 1505
auto dev_val1 = 1'2'3; // 123

cout << dec_val << " " << dev_val1 << " " << endl;
return 0;
}
