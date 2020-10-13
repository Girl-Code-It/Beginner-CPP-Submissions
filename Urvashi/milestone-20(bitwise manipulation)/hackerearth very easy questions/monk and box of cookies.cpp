#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t, n, a[32], max, index;
    long long x, p, q;
    cin >> t;
    while (t--)
    {
        cin >> n;
        max = 0;
        for (int i = 0; i < 32; i++) //set all the bits to 0..
            a[i] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;                    //input the ball with integer on it..
            q = 1;                       //take an integer q initialised to 1..
            for (int j = 0; j < 32; j++) //from 0 to 31 bits..
            {

                if (x & (1 << j))
                    a[j]++;
            }
        }
        for (int i = 0; i < 32; i++)
        {
            if (max < a[i])
            {
                max = a[i]; //finding the index where the set bit is largest..
                index = i;
            }
        }
        cout << index << endl; //printing the index at which probablity of winning is maximum...
    }
}
