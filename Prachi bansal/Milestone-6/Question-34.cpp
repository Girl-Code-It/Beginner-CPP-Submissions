#include<iostream>
using namespace std;
int main(){
	int x,n,sum=0,d;
	cout<<"Enter the number: ";
	cin>>x;
	n=x;
	while(n!=0){
		d=n%10;
		int prdt=1;
		for(int j=1;j<=d;j++){
			prdt*=j;
		}
		sum+=prdt;
		n/=10;
	}
	if(sum==x){
		cout<<"\nIt is a strong number";
	}else{
		cout<<"\nNot a strong number";
	}
	return 0;
}
