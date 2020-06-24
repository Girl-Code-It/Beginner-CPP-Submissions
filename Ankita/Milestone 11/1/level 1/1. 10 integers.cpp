#include <iostream>
using namespace std;
int main ()
{
    int a[10];
    for (int n = 0; n < 10; n++)
    {
        cout << "Enter a number: ";
        cin >> a[n];
    }
    for (int n = 0; n < 10; n++)
    {
        cout << "--> " << a[n] << "\n";
    }
}
