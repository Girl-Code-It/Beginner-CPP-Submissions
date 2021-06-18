/* If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10) */
#include<iostream>
using namespace std;

int main()
{
    int x = 2, y = 5, z = 0;

    cout<<(x == 2)<<endl;
    cout<<(x != 5)<<endl;
    cout<<(x != 5 and y >= 5)<<endl;
    cout<<(z != 0 or x == 2)<<endl;
    cout<<(not (y < 10))<<endl;
}
