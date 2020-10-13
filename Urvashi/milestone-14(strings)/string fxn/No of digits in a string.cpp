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
    int words = 0;
    cout << "no of digits are= ";
    for (int i = 0; i <= count; i++)
    {
        if (s[i] == ' ')
            words++;
    }
    cout << words + 1;
    return 0;
}
