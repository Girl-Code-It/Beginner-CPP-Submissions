#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k;
    char p;

    cout << "Enter the number of lines you want to print\n";
    cin >> n;
    k=64;
    for(i=1; i<=n; i++)
    {
        p = k+i;
        for(j=1; j<=n-i; j++)
        {
            cout << "  ";
        }
        for(j=1; j<=i; j++)
        {
            cout << " " << p;
            k++;
            p--;
        }
        cout << endl;
    }
}
