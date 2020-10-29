#include <iostream>
using namespace std;

int main()
{
    int num,n=0;

    cout<<"\n Enter a number: ";
    cin>>num;

    while(num!=0)
    {
        n=(n*10)+(num%10);
        num/=10;
    }

    while(n!=0)
    {
        if(n%10==0)
            {
                cout<<"Zero ";
            }
        else if(n%10==1)
            {
                cout<<"One ";
            }
        else if(n%10==2)
            {
                cout<<"Two ";
            }
        else if(n%10==3)
            {
                cout<<"Three ";
            }
        else if(n%10==4)
            {
                cout<<"Four ";
            }
        else if(n%10==5)
            {
                cout<<"Five ";
            }
        else if(n%10==6)
            {
                cout<<"Six ";
            }
        else if(n%10==7)
            {
                cout<<"Seven ";
            }
        else if(n%10==8)
            {
                cout<<"Eight ";
            }
        else
            {
                cout<<"Nine ";
            }

        n=n/10;
    }
    return 0;
}
