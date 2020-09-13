//Write a C program to print all Armstrong numbers between 1 to n.
 using namespace std;
 #include<iostream>
 #include<Math.h>
 int main()
 {
     int n,sum,i,len,num;
     cout<<"\n Enter the upper limit :";
     cin>>n;
     cout<<"\n Armstrong number between 1 to "<<n<<" is :";
     for(i=1;i<=n;i++)
     {
         sum=0;
         len=log10(i)+1;
         num=i;
         while(num!=0)
         {
             sum+=pow((num%10),len);
             num/=10;
         }
         if(sum==i)
         {
             cout<<"\t"<<i;
         }
     }
     return 0;
 }
