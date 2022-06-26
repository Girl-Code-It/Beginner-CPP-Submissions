#include<iostream>
using namespace std;
int factorial()
{
    int n,X=1;
    cout<<"Enter the number";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        X=X*i;
    }
    return X;
}
int main()
{
    int F=0;
    F=factorial();
    cout<<F;
    
}