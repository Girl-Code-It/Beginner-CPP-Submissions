#include <iostream>
#include <string.h>
using namespace std;
void string_copy(char *a, char *b, int i)
{
    b[i] = a[i];
    if (a[i] == '\0')
        return;
    string_copy(a, b, i + 1);
}
int main()
{
    int n;
    char a[20];
    char b[20];
    int len = strlen(a);
    gets(a);
    cout << "copied string is:";
    string_copy(a, b, 0);
    cout << b << endl;
    cout << "first string is:" << a << endl;
}
