#include <iostream>
#include <math.h>
using namespace std;
void bubbleSort(int *a, int *b, int n)
{
    int i, j, flag = 0;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                int demp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = demp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    bubbleSort(a, b, n);
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
}
