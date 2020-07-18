//Write a C program to print all Perfect numbers between 1 to n.

using namespace std;
#include<iostream>
int main()
{
    int n,sum;

    cout<<"\n Enter upper limit :";
    cin>>n;
    cout<<"\n PERFECT NUMBER between 1 to "<<n<<" is :";
    for(int i=1;i<n;i++)
    {
        sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            cout<<i<<",";
        }
    }
    return 0;
}
