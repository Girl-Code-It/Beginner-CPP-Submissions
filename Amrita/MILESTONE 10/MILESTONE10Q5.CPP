#include<iostream>
using namespace std;

 void prime_check(int n)
 {
    int flag=0;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
           {

            flag=1;
            cout<<"NOT A PRIME NUMBER \n";
            break;

           }
    }

    if(flag==0)
        cout<<"PRIME NUMBER";
}
void armstr_check(int n)

 {
    int t=n,sum=0;
    while (t>0)
    {
      int rem=t%10;
      sum=sum+(rem*rem*rem);
      t=t/10;
    }
    if (sum==n)
        cout<<"IT IS AN ARMSTRONG NUMBER\n";
    else
        cout<<"IT IS NOT AN ARMSTRONG NUMBER\n";
 }

 void perfect_check(int n)
 {
    int t=n,sum=0;
    for (int i=1;i<t;i++)
    {
        if (t%i==0)
        {
            sum=sum+i;
        }
    }

    if (sum==n)
        cout<<"IT IS A PEFECT NUMBER \n";
    else
        cout<<"IT IS  NOT A PERFECT NUMBER \n";
}
 int main ()
 {
     int num;
     cout<<"ENTER THE NUMBER \n";
     cin>>num;
     prime_check(num);
     armstr_check(num);
     perfect_check(num);
     return 0;
 }
