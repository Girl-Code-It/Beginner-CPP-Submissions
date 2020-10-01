//program to print maximum of two numbers

using namespace std;
#include<iostream>
int main()
{
    int a,b;
    cout<<"\n Enter two number:";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"\n Greater number among the two is "<<a;
    }
    else{
        cout<<"\n Greater number among the two is "<<b;
    }
    return 0;
}
