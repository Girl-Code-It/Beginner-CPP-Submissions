#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string a,w;
    int t,b,i,j,l;
    cout<<"Enter the no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the string : "<<endl;
        getline(cin,a);
        b=0;
        l=a.size();
        for(j=0;j<l;j++)
        {
            if(a[j+1]==' ')
            {
                w[b]+=a[j];
                b++;
                j++;
                continue;
            }
            else if(j==l-1)
            {
                w[b]+=a[j];
                b++;
                break;
            }
            w[b]+=a[j];
        }
    for(j=b-1;j>=0;j--)
    {
        cout<<w[j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
