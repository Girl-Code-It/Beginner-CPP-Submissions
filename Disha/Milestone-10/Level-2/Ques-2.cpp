using namespace std;
#include<iostream>

int prime(int n,int y=1)
{
    if(n%y==0)
        cout<<y<<",";
    if(y!=n)
    {
        y++;
        prime(n,y);
    }
}

int main()
{
    int num;
    cout<<"\n Enter the number :";
    cin>>num;
    cout<<"\n Prime factors are=";
    prime(num);
    return 0;
}
