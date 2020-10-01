using namespace std;
#include<iostream>

int Factorial(int n)
{
    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int num;
    cout<<"\n Enter the number :";
    cin>>num;
    cout<<"\n Factorial of given number ="<<Factorial(num);
    return 0;
}

