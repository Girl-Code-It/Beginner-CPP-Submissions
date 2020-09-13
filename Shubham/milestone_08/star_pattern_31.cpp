#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, l;

    cout << "Enter the number of lines you want to print\n";
    cin >> n;
    k=0, l=2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j || j == n-i+1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
