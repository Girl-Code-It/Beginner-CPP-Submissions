#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{   
    int i, j, n;

    cout << "Enter number of lines";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2-1; j++)
        {
            if(j>=n-i+2 && j<=n+i-2)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
