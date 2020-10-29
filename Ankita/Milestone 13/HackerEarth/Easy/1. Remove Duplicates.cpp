#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main ()
{
    char b[100] =  "", a[100];
    int t = 0;
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        int flag  = 1;
        for (int j = 0; j < t; j++)
        {
            if (b[j] == a[i])
            {
                flag  = 0;
                break;
            }
        }
        if (flag == 1)
        {
            b[t] = a[i];
            t++;
        }
    }
    puts(b);
    return 0;
}
