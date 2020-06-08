#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter a number :" << endl;

    cin >> a;

    if(a % 2 == 0)
    {
        cout << "the number entered is even" << endl;
    }

    else
    {
        cout << "the number entered is odd" << endl;
    }

    return 0;
}
