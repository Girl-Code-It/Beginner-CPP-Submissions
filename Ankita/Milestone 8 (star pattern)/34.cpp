#include <iostream>
using namespace std;
void print (int, int, int, int);
int main()
{
    int i, j, k = 5, m = 1, l;
    for (i = 1; i <= 5; i++)
    {
        if (i > 1)
        {
            m = m + k;
            k--;
            l = 6 - i;
        }
            print(j, m, l, i);
            cout << "\n";
    }

}
void print (int j, int m, int l, int i)
{
    for (j = 1; j <= 8; j++)
        {
            if (j <= i)
            {
                cout << m << " ";
                m = m - l;
                l++;
            }
            else
                cout << "  ";
        }
}
