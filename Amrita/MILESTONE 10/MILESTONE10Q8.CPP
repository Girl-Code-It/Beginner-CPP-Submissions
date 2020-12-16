//PROGRAM TO PRINT ARMSTRONG NUMBERS BETWEEN A GIVEN INTERVAL

#include<iostream>
using namespace std;
int is_armstr(int n)
{
    int t=n,sum=0;
    while(t>0)
    {
        int rem=t%10;
        sum+=(rem*rem*rem);
        t=t/10;

    }
    if (sum==n)
        return 1;
    else
        return 0;
}
void printarmstr(int a,int b)
{
    while (a<=b)
    {
        if (is_armstr(a))
            cout<<a<<endl;
        a++;
    }
}

int main()
{
    int u_limit,l_limit;
    cout<<"ENTER THE INTERVAL\n";
    cin>>l_limit>>u_limit;
    printarmstr(l_limit,u_limit);
}
