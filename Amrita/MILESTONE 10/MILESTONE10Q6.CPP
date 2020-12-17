// PROGRAM TO FIND PRIME NUMBER BETWEEN A GIVEN INTERVAL

#include <iostream>
using namespace std;

int prime_check(int n)
 {
    int flag=0;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
           {

            flag=1;
            return 0;
            break;

           }
    }

    if(flag==0)
        return 1;
 }

void prime(int a , int b )
{
     while (a<=b)
  {
         if(prime_check(a))
       {
           cout<<a;
           cout<<endl;

       }
    a++;
  }
}



int main ()
{
    int ulimit,llimit;
    cout<<"ENTER THE INTERVAL \n";
    cin>>llimit>>ulimit;
    prime(llimit,ulimit);
    return 0;
}
