using namespace std;
#include<iostream>

int prime(int n)
{
    int flag=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"\n Yes,given number is a prime number";
    else
        cout<<"\n No,given number is not a prime number";
}
int main()
{
    int num;
    cout<<"\n Enter the number :";
    cin>>num;
    prime(num);
    return 0;
}

