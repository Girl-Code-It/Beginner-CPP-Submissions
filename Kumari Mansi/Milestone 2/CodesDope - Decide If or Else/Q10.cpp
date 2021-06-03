/* If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10)  */
#include <iostream>
using namespace std;
int main()
{
    int x = 2;
    int y = 5;
    int z = 0;
    cout << (x == 2);
    cout << (x != 5);
    cout << (x != 5 && y >= 5);
    cout << (!(y < 10));

    return 0;
}