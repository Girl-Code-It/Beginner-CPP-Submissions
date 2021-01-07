#include<iostream>
using namespace std;
int main(){
int n,i,j,flag,sum=0;
cout<<"Enter any number : "	;
cin>>n;
for(i=2;i<=n;i++){
flag=1;
for(j=2;j<=i/2;j++){
if(i%j==0)
{flag=0;
break;}
}
if(flag==1&&n!=1)
sum=sum+i;
}
cout<<sum;
}

