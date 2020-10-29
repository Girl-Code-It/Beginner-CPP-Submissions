#include<iostream>
using namespace std;
int main()
{
    int start, end, num, i, prime, sum=0;
    cout<<"enter lower limit : \n";
    cin>>start;
    cout<<"enter upper limit : \n";
    cin>>end;
    for (num=start; num<=end; num++)
    {
        for(i=2; i<num; i++)       //a prime number is divisible by 1 and the number itself only
        {
              if(num%i==0)
              {
                   prime=0;
                   break;
              }
              else
              {
                   prime=1;
              }
        }

         if(prime==1)
        {
            cout<<"--> "<<num<<" is a prime."<<endl;
            sum+=num;
        }
    }
    cout<<endl<<"sum of prime numbers from "<<start<<" to "<<end<<" is : "<<sum<<endl;
    return 0;
}
