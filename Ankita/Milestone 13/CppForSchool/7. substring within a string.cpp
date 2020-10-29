//Write a program to find a substring within a string. If found display its starting position
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char a[100], b[100];
    cin.getline(a, 100);
    cin.getline(b, 100);
    int p = 0, pos, flag = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == b[0])
        {
            flag  = 1;
            p = i+1;
            pos = i+1;
            for (int k = 1; k < strlen(b); k++)
            {
                if (a[p] == b[k])
                {
                    p++;
                }
                else
                {
                    flag  = 0;
                    break;
                }
            }
        }
    }
    if (flag == 1)
    {
        cout << "Substring is found at " << pos;
    }
    else
        cout << "Substring is not found";
    return 0;
}
