#include<iostream>
using namespace std;
int main() {
	int n,i,sum=0;
cout<<"Enter any number : "	;
cin>>n;
while(n>0){
	i=n%10;
	sum=sum+i;
	n=n/10;
}
	cout<<"sum is = "<<sum<<endl;
	
}
