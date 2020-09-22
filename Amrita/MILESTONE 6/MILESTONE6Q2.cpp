
// PROGRAM TO PRINT ALL PERFECT NUMBERS BETWEEN 1 TO n

#include<iostream>
using namespace std;
int main()
{
    int num , sum=0;
    cout<<"ENTER THE NUMBER UPTO WHICH YOU WANT TO PRINT THE PERFECT NUMBERS \n";
    cin>>num;
    int lp=1; //variable created to form the loop till the given number
    while (lp<=num)
    {
        for (int i=1;i<=lp/2;i++)
       {
        if (lp%i==0)
            sum+=i;
    }
    if (lp==sum)
       {

        cout<<lp<<endl;
       }

     sum=0; // SUM IS MADE TO 0 AGAIN SO THAT IT DOES NOT ADD THE NEXT FACTORS IN THE CURRENT FACTORS
    lp++;
    }
    return 0;
}

