#include<iostream>
using namespace std;
int main(){
int n ,r,a=0,temp;	
cout<<"Enter any num : ";
cin>>n;
temp=n;
while(n!=0)	{
r=n%10;
a=r*r*r+a;
n=n/10; }
if(a==temp)
cout<<a<<"\n is  Armstrong Number"<<endl;
else
cout<<a<<"\n is not Armstrong Number"<<endl;

}
