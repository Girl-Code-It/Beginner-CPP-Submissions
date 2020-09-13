// Write a program to check a string is palindrome or not
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char a[100];
    cin.getline(a, 100);
    int k  = strlen(a), flag = 1;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != a[--k])
        {
            cout << "This String is not a palindrome";
            flag = 0;
            break;
        }
    }
    if (flag  == 1)
        cout << "This string is a palindrome";
    return  0;
}
