#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{   
    int i, j, n, counter;

    cout << "Enter number of lines";
    cin >> n;

    for(i=1; i<=n; i++)
    {   
        counter = 1;
        for(j=1; j<=n*2-1; j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
               cout << counter;
               if(j<n)  counter++;
               else     counter--;

            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
