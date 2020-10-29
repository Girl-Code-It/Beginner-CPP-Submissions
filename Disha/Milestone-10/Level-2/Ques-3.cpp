using namespace std;
#include<iostream>

int fib(int n)
{
    int first=0,second=1,third,a[n];
    a[0]=first;
    a[1]=second;

    for(int i=2;i<=n;i++)
    {
        third=first+second;
        a[i]=third;
        first=second;
        second=a[i];
    }
    cout<<endl<<n<<"th term of the fibonacci series is :"<<a[n-1];
}

int main()
{
    int n;

    cout<<"\n Enter the nth term of the fibonacci series :";
    cin>>n;

    fib(n);
    return 0;
}
