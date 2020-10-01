//Write a C program to find sum of all odd numbers between 1 to n.

using namespace std;
#include<iostream>
int main()
{
    int total=0,n;
    cout<<"\n Enter upper limit :";
    cin>>n;

    for(int i=1;i<=n;i+=2)
    {
        total+=i;
    }
    cout<<"\n Sum of all odd number from 1 to "<<n<<" is :"<<total<<endl;
    return 0;
}
