#include<iostream>
using namespace std;
int main(){
int n,r,i,sum,temp;	
cout<<"Enter any number : ";
cin>>n;
cout<<"Armstrong number from 1 to n are : ";
for(i=1;i<=n;i++){
temp=i;
sum=0;
while(temp>0){
r=temp%10;
sum=sum+r*r*r;
temp=temp/10;	
}
if(i==sum)
cout<<i<<" ,";}
}
