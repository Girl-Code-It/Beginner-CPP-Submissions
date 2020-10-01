#include <iostream>
using namespace std;
void read(int i, int l, int *a)
{
    if (i <= l-1)
    {
        cout << "Enter " << i << " element: ";
        cin >> a[i];
        read (i = i+1, l, a);
    }

    if (i == l -1)
    {
        for(i = 0; i < l; i++)
        {
            cout << a[i] << "\t";
        }
    }
}
int main ()
{
    int l, i = 0, a[99];
    cout << "Enter the size of array: ";
    cin >> l;
    read(0, l, a);
}
