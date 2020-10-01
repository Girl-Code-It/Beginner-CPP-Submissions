//program to check whether a number is negative, zero, positive
using namespace std;
#include<iostream>
int main()
{
    int n1;
    cout<<"\n Enter a number:";
    cin>>n1;
    if(n1>0){
        cout<<"\n Given number is positve";
    }
     else if(n1<0){
        cout<<"\n Given number is negative";
    }
     else if(n1==0){
        cout<<"\n Given number is zero";
    }
    return 0;
}
