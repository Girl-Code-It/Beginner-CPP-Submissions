#include<iostream>
using namespace std;
int main(){
int n,i,fact=1,rem,sum=0,temp;	
cout<<"Enter any number :";
cin>>n;
temp=n;
while(n>0)
{i=1,fact=1;
rem=n%10;
while(i<=rem)
{
fact=fact*i;
i++;	
}
sum=sum+fact;
n=n/10;

}
if(sum==temp)
cout<<temp<<" is strong number ";

else
cout<<temp<<" not a strong number";
}

