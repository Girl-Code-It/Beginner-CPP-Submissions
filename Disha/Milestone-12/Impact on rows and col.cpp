using namespace std;
#include<iostream>
int main()
{
    int a[20][20],row, col, b[20][2],i,j,l=0,m=0;

    cin>>row>>col;

    for( i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                b[l][0]=i;
                b[l][1]=j;
                l++;
            }
        }

    }

    while(m<l)
    {
       i=b[m][0];
       for(j=0;j<col;j++)
       {
           a[i][j]=1;
       }
       j=b[m][1];
       for(i=0;i<row;i++)
       {
           a[i][j]=1;
       }
       m++;
    }


    for(i=0;i<row;i++)
    {

        for(j=0;j<col;j+=2)
        {
            cout<<a[i][j]<<" "<<a[i][j+1];
        }
        if(i<=row-2)
        {
            cout<<"\n";
        }
    }
    return 0;
}
