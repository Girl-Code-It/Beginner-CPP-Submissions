//Write a C program to check whether a number is Strong number or not.
 using namespace std;
 #include<iostream>
 #include<stdlib.h>
 int main()
 {
     int num,sum=0,product,last;

     cout<<"\n Enter a number :";
     cin>>num;
     if(num==0)
     {

         cout<<"\n "<<num<<" is not a STRONG NUMBER "<<endl;
         exit(0);

     }
     int n=num;
     while(num!=0)
     {
        last=num%10;
        product=1;
        for(int i=1;i<=last;i++)
        {
            product*=i;
        }
        sum+=product;
        num/=10;
     }
     if(sum==n)
     {
         cout<<"\n "<<n<<" is a STRONG NUMBER "<<endl;
     }
     else
     {

         cout<<"\n "<<n<<" is not a STRONG NUMBER "<<endl;
     }

     return 0;
 }
