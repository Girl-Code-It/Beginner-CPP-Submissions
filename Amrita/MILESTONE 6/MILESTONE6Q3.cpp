// PROGRAM TO CHECK WHETHER A NUMBER IS A STRONG NUMBER OR NOT

#include<iostream>
using namespace std;
int main()
{
    int num, orgnum,sum=0;
    cout<<"ENTER THE NUMBER TO CHECK WHETHER IT IS A STRONG NUMBER OR NOT \n";
    cin>>num;
    orgnum=num;
    while (num>0)
    {

        int n=num%10;
         int fact=1;
         for (int i=1; i<=n; i++)
         {
             fact*=i;
         }
         sum+=fact;
         num=num/10;

    }
         if (orgnum==sum)
           cout<<"IT IS A STRONG NUMBER \n";
         else
            cout<<"IT IS NOT A STRONG NUMBER \n";
        return 0;


}
