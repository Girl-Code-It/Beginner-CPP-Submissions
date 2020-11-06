#include <iostream>
using namespace std;
int main()
{
    char s[20];
    cout << "enter the string :" << endl;
    gets(s);
    int count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    cout << "after reversing the string is=" << endl;
    for (int i = count - 1; i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}
