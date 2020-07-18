//Write a C program to check whether a number is Armstrong number or not.
 using namespace std;
 #include<iostream>
 #include<Math.h>
 int main()
 {
     int num,n,sum=0;
     cout<<"\n Enter a number :";
     cin>>num;
     int i=num;
     n=log10(num)+1;
     while(num!=0)
     {
         sum=sum+pow((num%10),n);
         num=num/10;
     }
     if(sum==i)
     {
         cout<<"\n Yes the given number is an armstrong number"<<endl;
     }
     else
     {
        cout<<"\n NO, the given number is not an armstrong number"<<endl;
     }
     return 0;
 }
