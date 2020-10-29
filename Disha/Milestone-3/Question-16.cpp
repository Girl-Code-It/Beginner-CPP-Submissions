//Write a C program to enter a number and print its reverse.

using namespace std;
#include<iostream>
 int main()
 {
     int num;
     cout<<" Enter a number :";
     cin>>num;
     cout<<"\n Reversed number =";
     while(num!=0)
     {
         cout<<num%10;
         num/=10;
     }
     return 0;
 }
