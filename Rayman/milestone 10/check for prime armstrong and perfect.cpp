#include <iostream>
#include <math.h>
using namespace std;
void prime(int num);
void perfect(int num);
void armstrong(int num);

int main()
{
    int num;
    cout<<"input a number : ";
    cin>>num;
    prime(num);
    perfect(num);
    armstrong(num);
}


void prime(int num)
{
    for(int i=2; i<num; i++)
    {
    if(num%i==0)
        {cout<<num<<" is not a prime number."<<endl; break;}
    else
        cout<<num<<" is a prime number."<<endl; break;
    }
}

void perfect(int num)
{
    int i, sum=0;
    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if (sum==num)
    cout<<sum<<" is a perfect number."<<endl;
    else
    cout<<num<<" is not a perfect number."<<endl;
}

void armstrong(int num)
{
    long long int ld, count, sum=0;
    while (num>0)
    {
        num=num/10;
        count++;
    }
    while (num>0)
    {
        num=num/10;
        ld=num%10;
        sum=sum+pow(ld,count);
    }
    if(sum==num)
    cout<<"it is an armstrong number."<<endl;
    else
    cout<<"it is not an armstrong number.";
}
