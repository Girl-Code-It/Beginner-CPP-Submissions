/*
Ones complement of a binary number is defined as value obtained by inverting all binary bits.
It is the result of swapping all 1s to 0s and all 0s to 1s.
for eg : 10010011 changes to 01101100
*/
#include<iostream>
using namespace std;
int main ()
{
    int num, i, j, ld=0, rev=0, revld, ct=0, extra=0, tz=0;
    cout<<"enter a binary number : "<<endl;
    cin>>num;
    cout<<"one's complement of "<<num<<" is : ";
    for(i=num; i>0; i=i/10)
    {
        ld=i%10;
        rev=rev*10+ld;
         if(ld==0)               //for counting total no. of zeros.
        {
            ct++;
        }
    }
    for(j=rev; j>0; j=j/10)
    {
        revld=j%10;
        if (revld!=1 && revld!=0)
        {
            cout<<"wrong input....."<<endl;
            break;
        }
        else
        {
        if(revld==0)
        {
            extra++;
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
        }
    }
    tz=ct-extra;              //tz=trailing zeros
    for(j=1; j<=tz; j++)
    {
        cout<<"1";         //prints no. of trailing zeros.
    }
    return 0;
}
