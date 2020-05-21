#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    //string a,b;
    char i,a[26],b[20];
    int j,l,k,m;
    k=0;
    cout<<"Enter the string and 'k' : "<<endl;
    cin>>a>>m;
    l=strlen(a);
    for(i='a';i<='z';i++)
    {
        for(j=0;j<l;j++)
        {
            if(k==0)
            {
            if(i==a[j])
              {
                b[k]=a[j];
                a[j]='';
                k++;
                break;
              }
            }
            else
                if(k>0&&k<m)
            {
                if(b[k-1]!=a[j])
                {
                    if(i==a[j])
                  {
                    b[k]=a[j];
                    a[j]='';
                    k++;
                    break;
                  }
                }
            }
        else
            if(k>=m&&k<=l+m-1)
                    {
                        b[k]=a[j];
                        k++;

                    }
    }
    }
    cout<<b;
    return 0;
}
