//Write a C program to print all Strong numbers between 1 to n.

using namespace std;
#include<iostream>
int main()
{
    int i,j,n,sum,product,num,last;

    cout<<"\n Enter upper limit :";
    cin>>n;

    cout<<"\n STRONG NUMBER between 1 to "<<n<<" is :";
    for(i=1;i<=n;i++)
    {
        num=i;
        sum=0;
        while(num!=0)
        {
            last=num%10;
            product=1;
            for(j=1;j<=last;j++)
            {
                product*=j;
            }
            sum+=product;
            num/=10;
        }
        if(sum==i)
        {
            cout<<i<<",";
        }
    }
    return 0;
}
