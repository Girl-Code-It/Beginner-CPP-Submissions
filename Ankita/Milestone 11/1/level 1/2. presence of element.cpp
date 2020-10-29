#include <iostream>
using namespace std;
int main ()
{
    int a[10], n, i;
    for (n = 0; n <10; n++)
    {
        cout << "Enter a number: ";
        cin >> a[n];
    }
    cout << "enter any number: \n";
    cin >> i;
    for (n = 0; n < 10; n++)
    {
        if (a[n] == i)
        {
            cout << "this number is an element of array you entered";
            break;
        }
    }
}
