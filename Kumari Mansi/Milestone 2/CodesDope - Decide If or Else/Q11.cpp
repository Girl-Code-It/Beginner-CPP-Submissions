/* Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase character ";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase character";
    else
        cout << "wrong input character";
    return 0;
}