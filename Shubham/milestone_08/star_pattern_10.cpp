#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
    int i, j, n, k=0;
    cout << "Enter number of lines you want to print\n";
    cin >> n;

    for(i=1; i<=n*2-1; i++)
    {   
        
        for(j=1; j<=n*2-1; j++)
        {
            if(j>=n-k && j<=n+k)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        if(i<n)    k++;
        else        k--;
    }
}
