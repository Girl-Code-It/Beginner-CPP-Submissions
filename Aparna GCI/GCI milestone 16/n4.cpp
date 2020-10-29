#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,c,i,f,j;
    char a[1000];
    f=c=0;
    cout<<"Enter the no. of lines : "<<endl;
    cin>>n;
    cout<<"Enter the string : "<<endl;
    for(j=0;j<=n;j++)
    {
        gets(a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='0'&&a[i]<='9')
            {
                if(((a[i]=='1')&&(a[i+1]=='9'))||((a[i]=='2')&&(a[i+1]=='0')))
                {
                    c+=4;
                    i++;
                }
                else
                {
                    f+=3;
                    i++;
                }
            }
        }
    }
       if(c>f)
        cout<<"DATE";
       else
        cout<<"NO DATE";
    return 0;
}
