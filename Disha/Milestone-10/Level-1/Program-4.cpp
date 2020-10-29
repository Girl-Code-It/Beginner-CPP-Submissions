using namespace std;
#include<iostream>
int max(int a,int b,int c)
{
    //for max number
    if(a>b)
    {
        if(a>c)
            cout<<"\n Greater number="<<a;
        else
            cout<<"\n Greater number="<<c;
    }
    else if(b>c)
    {
        cout<<"\n Greater number="<<b;
    }
    else
        cout<<"\n Greater number="<<c;

    //for min number
    if(a<b)
    {
        if(a<c)
            cout<<"\n Smallest number="<<a;
        else
            cout<<"\n Smallest number="<<c;
    }
    else if(b<c)
    {
        cout<<"\n Smallest number="<<b;
    }
    else
        cout<<"\n Smallest number="<<c;
}

int main()
{
    int n1,n2,n3;
    cout<<"\n Enter 1st number :";
    cin>>n1;
    cout<<"\n Enter 2nd number :";
    cin>>n2;
    cout<<"\n Enter 3rd number :";
    cin>>n3;
    max(n1,n2,n3);
    return 0;
}
