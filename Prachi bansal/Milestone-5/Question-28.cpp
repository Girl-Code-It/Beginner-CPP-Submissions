#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	for(int i=2;i<=n;i++){
		int prime=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				prime=1;
				break;
			}
		}
		if(prime==0){
			sum+=i;
		}
	}
	cout<<"\nSum of prime no's is: "<<sum;
	return 0;
}
