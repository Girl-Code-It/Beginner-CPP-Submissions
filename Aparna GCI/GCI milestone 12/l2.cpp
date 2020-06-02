#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,a[10][10],n,m,ch,s,c,r,b[10][10];
    s=0;
    char ans;
    cout<<"Enter the size of matrix"<<endl;
    cin>>m>>n;
    do
    {
    cout<<"Enter the choice : "<<endl;
    cout<<"1. Input"<<endl;
    cout<<"2. Display"<<endl;
    cout<<"3. Sum"<<endl;
    cout<<"4. Row wise sum"<<endl;
    cout<<"5. Column wise sum"<<endl;
    cout<<"6. Transpose of matrix"<<endl;
    cin>>ch;
    if(ch==1)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                cin>>a[i][j];
        }
    }
    else
        if(ch==2)
    {
        for(i=0;i<m;i++)
        {
            cout<<endl;
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
        }
    }
    else
        if(ch==3)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                s+=a[i][j];
            }
        }
        cout<<s;
    }
    else
        if(ch==4)
    {
        for(i=0;i<m;i++)
        {
            r=0;
            for(j=0;j<n;j++)
            {
                r+=a[i][j];
            }
                cout<<"Sum of row "<<i<<"="<<r;
        }

    }
    else
        if(ch==5)
    {
        for(j=0;j<n;j++)
        {
            c=0;
            for(i=0;i<m;i++)
            {
                c+=a[i][j];
            }
            cout<<"Sum of column "<<j<<"+"<<c;
        }
    }
    else
        if(ch==6)
  {
      {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                b[i][j]=a[j][i];
        }
    }
    for(i=0;i<m;i++)
    {
        cout<<endl;
        for(j=0;j<n;j++)
            cout<<b[i][j]<<" ";
    }
  }
  cout<<endl<<"Do you wanna enter more : "<<endl;
  cin>>ans;
    }
 while(ans=='y'||ans=='Y');
    return 0;
}
