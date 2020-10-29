#include<iostream>
using namespace std;
int main(){
	int n,d,z;
	cout<<"Enter the number: ";
	cin>>n;
	
	cout<<"\nThe strong numbers are: ";
	for(int i=1;i<=n;i++){
		z=i;
		int sum=0;
		while(z!=0){
		d=z%10;
		int prdt=1;
		for(int j=1;j<=d;j++){
			prdt*=j;
		}
		sum+=prdt;
		z/=10;
	}
		if(i==sum){
			cout<<i<<" ";
		}
	}
	return 0;
}
