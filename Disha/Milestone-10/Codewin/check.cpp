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
        cout<<"\n Yes "<<n<<" is a prime number ";
    else
        cout<<"\n No "<<n<<" is not a prime number ";
}

int armstrong(int n)
{
    int num=n,new_num=0;
    while(num!=0)
    {
        new_num=(new_num*10)+num%10;
        num/=10;
    }
    if(n==new_num)
        cout<<"\n Yes "<<n<<" is an armstrong number ";
    else
        cout<<"\n No "<<n<<" is not an armstrong number ";
}

int perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        cout<<"\n Yes "<<n<<" is a perfect number ";
    else
        cout<<"\n No "<<n<<" is not a perfect number ";

}
int main()
{
    int num;
    cout<<"\n Enter a number :";
    cin>>num;

    prime(num);
    armstrong(num);
    perfect(num);
    return 0;
}
