#include<iostream>
using namespace std;
int main(){
int i,n;
bool flag = true;
cout<<"Enter any number : ";
cin>>n;
for(i=2;i<=n/2;i++){
if(n%i==0)	{
flag = false;
break;
}
}	
if(flag==true)	
cout<<n<<" Number is prime"<<endl;
else
cout<<n<<" number is not  prime ";
return 0;
}
