#include <iostream>
using namespace std;
int comp (int k);
int main ()
{
    int binary, k;
    cout << "Enter any binary number: " ;
    cin >> binary;
    cout << "Hexadecimal number = ";
    int h1 = 0 , h2 = 0, m = 0;
    char h3;
    while (binary > 0)
    {
        k = binary % 10000;
        if (m = 0)
            h2 = h1;
        else
            h3 = h1;
        h1 = comp (k);
        if ( h1 >= 10)
        {
             h3 = comp (k);
             m = 1;
        }
        binary = binary / 10000;
    }
    if (m = 0)
        cout << h1 << h2;
    else
        cout << h1 << h3;
}
int comp (int k)
{
    int refer1[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111}, h;
    char p;
    for (int i = 0; i < 16; i++)
    {
        if (k == refer1[i])
        {
            if ( i < 10)
            {
                 h = i ;
                return (h);
            }
            else
            {
                switch (i)
                {
                    case 10:
                         p = 'A' ;
                         break;
                    case 11:
                         p = 'B' ;
                         break;
                    case 12:
                         p = 'C' ;
                         break;
                    case 13:
                         p = 'D' ;
                         break;
                    case 14:
                         p = 'E' ;
                         break;
                    case 15:
                         p = 'F' ;
                         break;
                }
                return (p);
                }

        }

    }

}
