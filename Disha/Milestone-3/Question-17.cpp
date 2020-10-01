//Write a C program to check whether a number is palindrome or not.

#include<iostream>
using namespace std;

int main()
{
    int num,rev=0,n;
    cout<<"\n Enter the number :";
    cin>>num;
    n=num;

    while(num!=0)
    {
         rev=(rev*10)+(num%10);
        num=num/10;
    }
     if(n==rev)
     {
         cout<<"\n Yes,given number is a palindrome number "<<endl;
     }
     else{
        cout<<"\n No,given number is not a palindrome number "<<endl;
     }


    return 0;
}

