#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{   
    int i, j, n;
    char counter;

    cout << "Enter number of lines";
    cin >> n;

    for(i=1; i<=n; i++)
    {   
        counter = 65;
        for(j=1; j<=n*2-1; j++)
        {
            if(j>=n-i+2 && j<=n+i-2)
            {
                cout << " ";
                 if(j < n)
                    counter++;
                else
                    counter--;
               
            }
            else if(1)
            {
                cout << counter;
                if(j < n)
                    counter++;
                else
                    counter--;
            }    
        }
        cout << endl;
    }
}
