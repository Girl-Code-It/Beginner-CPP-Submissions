#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (isupper(ch))
        cout << ch << "is an upper case" << endl;
    else if (islower(ch))
        cout << ch << "is a lower case" << endl;
    else
        cout << ch << "is not an alphabetic character" << endl;
}
