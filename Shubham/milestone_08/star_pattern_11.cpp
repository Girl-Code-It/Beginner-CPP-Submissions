#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
    int i, j, n, k;
    cout << "Enter Numbe of lines you want to print : \n";
    cin >> n;
    k=1;
    for(i=1; i<=2*n-1; i++)
    {   
        for(j=1; j<=n; j++)
        {
            if(j<=k)
                cout << "*";
            else
                cout << " ";
        }
        (i<n) ? k++ : k--;
        cout << endl;
    }

}
