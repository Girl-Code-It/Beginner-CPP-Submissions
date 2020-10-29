// program to check whether a given number is a perfect number or not

#include<iostream>
using namespace std;
int main()
{
    int num , sum=0;
    cout<<"ENTER THE DIGIT TO SEE WHETHER IT IS A PERFECT UMBER OR NOT \n";
    cin>>num;
    for (int i=1;i<=num/2;i++)
    {
        if (num%i==0)
            sum+=i;
    }
    if (num==sum)
        cout<<"IT IS A PERFECT NUMBER ";
    else
          cout<<"IT IS NOT A PERFECT NUMBER ";
    return 0;
}

