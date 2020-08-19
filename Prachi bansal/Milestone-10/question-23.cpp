#include<iostream>
using namespace std;
int strong(int x,int y){
	int n,sum=0,fact=1,d;
	for(int j=x;j<=y;j++){
		n=j;
		sum=0;
		while(n!=0){
			d=n%10;
			for(int i=1;i<=d;i++){
				fact=fact*i;
			}
			sum=sum+fact;
			n=n/10;
			fact=1;
		}
		if(sum==j){
			cout<<j<<" ";
		}
	}
}
main(){
	int a,b;
	cout<<"Enter the range of number: ";
	cin>>a>>b;
	cout<<"\nStrong numbers are: ";
	strong(a,b);
}
