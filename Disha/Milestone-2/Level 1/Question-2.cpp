//Take two int values from user and print greatest among them.
using namespace std;
#include<iostream>

int main()
{
    int n1,n2;

    cout<<"\n Enter two number:";
    cin>>n1>>n2;

    if(n1>n2){
        cout<<"\n Greater number among "<<n1<<"&"<<n2<<"is:"<<n1;
    }
    else{
        cout<<"\n Greater number among "<<n1<<" & "<<n2<<" is:"<<n2;
    }
    return 0;
}
