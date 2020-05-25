#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100][100],l[20],temp;
    int i,j,k,m,n,o,f,b;
    f=0;
    cout<<"Enter the size of string : "<<endl;
    cin>>n;
    cout<<"Enter the strings : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        l[i]=strlen(a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=l[i];
        for(j=i+1;j<n;j++)
        {
            if(b==l[j])
            {
                for(k=0;k<n;k++)
                {
                    o=0;
                    for(m=k+1;m<n;m++)
                    {
                        if(a[k][o]!=a[m][o])
                        {
                            temp=a[m][o];
                            a[m][o]=a[m][o+1];
                            a[m][o+1]=temp;
                            o++;
                            continue;
                        }
                    }
                }
            }
        }
    }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]==a[k])
                {
                    f++;
                }
            }
        }
    cout<<f;
    return 0;
}
