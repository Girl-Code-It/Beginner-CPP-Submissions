#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter a number" << endl;

    cin >> a;

    if(a>0)
    {
        cout << "the number entered is positive\n";
    }
    else if(a<0)
    {
        cout << "the number entered is negative\n";
    }
    else
    {
        cout << "the number entered is zero" << endl;
    }
    return 0;
}
