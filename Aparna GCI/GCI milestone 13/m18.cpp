#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char a[20];
    int i,j,k,d,t,e,pos,l,b;
    pos=0;
    int arr[]={67,71,73,79,83,89,97,101,103,107,109,113};
    cout<<"Enter the no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter length and string : "<<endl;
        cin>>l>>a;
        for(j=0;j<l;j++)
        {
            b=(int)a[j];
            d=fabs(b-arr[0]);
            {
                for(k=0;k<12;k++)
                {
                    e=fabs(b-arr[k]);
                    if(e<d)
                    {
                        d=e;
                        pos=k;
                    }
                }
                cout<<(char)arr[pos];
            }
        }
        cout<<endl;
    }
    return 0;
}
