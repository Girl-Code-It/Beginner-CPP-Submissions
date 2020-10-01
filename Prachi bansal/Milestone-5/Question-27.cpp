#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"\nPrime numbers are between 1 and "<<n<<" are: ";
	for(int i=2;i<=n;i++){
		int prime=0;
		for(int j=2; j<=i/2;j++){
			if(i%j==0){
				prime=1;
				break;
			}
		}
		if(prime==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
