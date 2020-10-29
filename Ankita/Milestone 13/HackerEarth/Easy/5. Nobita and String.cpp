#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main ()
{
    int t, k, l;
    cin >> t;
    string a;
    for (int i = 0; i < t+1; i++)
    {
        getline (cin, a);
        if (i > 0)
        {
            k = 0, l = 0;
            string a1[10000];
            for (int j = 0; j < a.size(); j++)
            {
                if (a[j] == ' ')
                {

                    if(j != a.size()-1)
                        k++;
                    l = 0;
                }
                else
                {
                    a1[k] += a[j];   //try it without + operator by assigning values
                    l++;
                }
            }
            a.erase(a.begin(), a.end()); // a = "";
            for (int j = 0, m = k; j <= k; j++)
            {
                if (j <= (k-1)/2)
                {
                    string temp = a1[j];
                    a1[j] = a1[m];
                    a1[m] = temp;
                    m--;
                }

                if(j < k)
                    a += a1[j]  + " ";
                else
                    a += a1[j];
            }
            puts (a.c_str());
        }
    }
    return 0;
}

