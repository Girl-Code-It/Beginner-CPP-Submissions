#include<iostream>
using namespace std;
int main(){
int	sum=0,i,n,j;
cout<<"Enter a number : ";
cin>>n;
cout<<"Perfect number from one to above entered number ";
for(i=1;i<=n;i++){
j=1	;
while(j<=i/2){
if(i%j==0)
sum=sum+j;
j++;	
}
if(sum==i)
cout<<" "<<i;
sum=0;
}
}
