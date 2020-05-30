#include <iostream>
#include <string.h>
using namespace std;

int main()
{

//answer 2
    int a, b;
    cout << "enter no. 1" << endl;
    cin >> a;
    cout << "enter no. 2" << endl;
    cin >> b;
    if (a == b)
    {
        cout << "equal";
    }
    else if (a > b)
    {
        cout << a << " is greater i.e no. 1" << endl;
    }
    else
    {
        cout << b << " is greater i.e. no. 2" << endl;
    }
return 0;
}
