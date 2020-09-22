// PROGRAM TO PRINT ALL  ARMSTRONG NUMBERS BETWEEN 1 TO n

#include<iostream>
using namespace std;
int main()
{
    int digit,sum=0;
    cout<<"ENTER THE NUMBER UPTO WHICH YOU WANT TO PRINT THE ARMSTRON NUMBER \n";
    cin>>digit;
    cout<<"THE ARMSTRONG NUMBER BETWEEN 1 TO ENTERED  NUMBER IS \n";
   for (int i=1;i<=digit; i++)
   {  int j=i;
   sum=0;
       while (j>0)
    {
        int n;
        n=j%10;
        j=j/10;
        sum=sum+(n*n*n);

    }

    if (sum==i)
        cout<<i<<endl;





   }

    return 0;
}
