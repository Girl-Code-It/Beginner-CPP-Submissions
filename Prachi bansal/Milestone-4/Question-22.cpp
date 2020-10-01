#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	cout<<"\nFactors are: ";
	for(int i=1; i<=x;i++){
		if(x%i==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
