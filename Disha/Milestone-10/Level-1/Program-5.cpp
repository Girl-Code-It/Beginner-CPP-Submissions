using namespace std;
#include<iostream>

int check(int n)
{
    if(n%2==0)
        cout<<"\n Given number is an even number";
    else
        cout<<"\n Given number is an odd number";
}
int main()
{
    int num;
    cout<<"\n Enter the number :";
    cin>>num;
    check(num);
    return 0;
}
