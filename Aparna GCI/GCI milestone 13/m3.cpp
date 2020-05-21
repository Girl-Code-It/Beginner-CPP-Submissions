#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char a[100];
    int t,i,j,f;
    f=0;
    cout<<"Enter the no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the string : "<<endl;
        cin>>a;
        for(j=1;a[j]!='\0';j++)
        {
                if(((int)a[j]-(int)a[j-1])==1||((int)a[j-1]-(int)a[j])==1)
                {
                    f=0;
                }
                else
                {
                    f=1;
                    break;
                }
        }
        if(f==1)
            puts("N0");
        else
            puts("YES");
    }
    return 0;
}
