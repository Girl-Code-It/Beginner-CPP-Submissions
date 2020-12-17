// PROGRAM TO STRONG NUMERS BETWEEN A GIVEN INTERVAL

#include<iostream>
using namespace std ;
int factorial(int n)
{
    int fact=1;
    for (int i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    return fact;
}

int is_strong(int n)
{
    int t=n,sum=0;
    while (t>0)
    {
        int rem=t%10;

        sum=sum+factorial(rem);
        t=t/10;

    }
    if (sum==n)
        return 1;
    else
        return 0;
}
void printstrong(int a ,int b)
{
    while (a<=b)
    {
        if(is_strong(a))
            cout<<a<<"\t";
        a++;
    }
}

 int main ()
 {
     int u_limit,l_limit;
     cout<<"\n Enter the interval\n";
     cin>>l_limit>>u_limit;
     cout<<"The strong numbers between the given interval are \n";
     printstrong(l_limit,u_limit);
     return 0;
 }
