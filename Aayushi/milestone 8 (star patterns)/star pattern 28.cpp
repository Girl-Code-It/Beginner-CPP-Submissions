#include<iostream>
using namespace std;
int main()
{
    int rows, k=0, i, j, p=1;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=1; i<=rows; i++)
    {
        if(i%2==0)                   //for even rows
        {
            k=k+i;
            k--;                  //for balancing extra increment.
        }
        else                         //for odd rows
        {
            k=k+1;
        }
        p=k;
        for (j=1; j<=2*rows-1; j++)
        {

            if(j<=i*2-1)
            {
                if(j%2==0)              //for even columns
                    cout<<"*";
                else                   //for odd columns
                {
                    cout<<p;
                    if(i%2==0)
                        p--;
                    else
                    {
                        k++;
                        p++;
                    }
                }
            }
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
