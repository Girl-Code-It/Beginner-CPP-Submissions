#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    int length;
    cout << "enter a string:" << endl;
    cin >> a;
    length = strlen(a);
    cout << "number of digits:" << length << endl;
}
