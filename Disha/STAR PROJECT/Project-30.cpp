using namespace std;
#include<iostream>
int main()
{
    int n,col,k;
    cout<<"Enter the value of n :";
    cin>>n;
    col=(2*n)-1;
    k=n;
    for(int i=1;i<=3*n;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i<=n)
            {
                if(j>=col-i+1)
                    cout<<"*";
                else
                    cout<<" ";
            }
            else if(i>=n+1 && i<=2*n)
            {
                if(j==n)
                {
                    cout<<"|";
                }
                else if((j<=i-(n+1) && i>=n+2) || (j>=i && i<=(2*n)-1 ))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }


            else if(i>2*n)
            {
                if(j<=k)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
        i<(2*n)+1?k=n:k--;
    }

    return 0;
}
