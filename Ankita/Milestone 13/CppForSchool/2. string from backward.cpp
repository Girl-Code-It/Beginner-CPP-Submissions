//Write a program to display string from backward.
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char a[1000];
    cin >> a;
    for(int i = strlen(a)-1; i > -1; i--)
    {
        cout << a[i];
    }
}
