#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main ()
{
    int t, n, k, flag = 0;
    cin >> t;
    for (int i = 0; i < t+1; i++)
    {
        cin >> n >> k;
        char a[n];
        for(int m = 0; m < 2; m++)
        {
            gets(a);
            if (m>0)
            {
                for (int j = 0; j < n; j++)
                {
                    if((a[j] >= 65 && a[j] <= 90) )
                    {
                        if(k>26)
                            k %= 26;
                        if(a[j] + k <= 90)
                        {
                            a[j]+= k;
                        }
                        else
                        {
                            a[j] = 65 + (k-(90-a[j])-1);
                        }
                    }
                    else if((a[j] >= 97 && a[j] <= 122))
                    {
                        if(k>26)
                            k %= 26;
                        if(a[j] + k <= 122)
                        {
                            a[j]+= k;
                        }
                        else
                        {
                            a[j] = 97 + (k-(122-a[j])-1);
                        }
                    }
                    else if (a[j] >= 48 && a[j] <= 57)
                    {
                        if(k > 10)
                           k %= 10;
                        if(a[j] + k<= 57)
                            a[j] += k;
                        else
                        {
                            a[j] = 48 + (k - (57 - a[j])-1);
                        }
                    }
                }
                puts(a);
            }
        }

    }

}
