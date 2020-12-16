// PROGRAM TO PRINT ALL PERFECT NUMBERS BETWEEN A GIVEN INTERVAL

#include<iostream>
using namespace std;

int is_perfect(int n)
{
    int sum=0,t=n;
    for(int i=1;i<t;i++)
    {
        if (t%i==0)
            sum+=i;

    }
    if (sum==n)
        return 1;
    else
        return 0;
}

void printperfect(int a,int b)
{
    while (a<=b)
    {
        if(is_perfect(a))
        {
            cout<<a<<endl;

        }
        a++;
    }
}

 int main()
 {
    int u_limit,l_limit;
    cout<<"ENTER THE INTERVAL\n";
    cin>>l_limit>>u_limit;
    printperfect(l_limit,u_limit);

 }
