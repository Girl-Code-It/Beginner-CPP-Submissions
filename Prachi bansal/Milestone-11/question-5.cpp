//sum and product of elements
#include<iostream>
using namespace std;

int main(){
	int a[50],sum=0,prdt=1,n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter integers in the array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
		prdt*=a[i];
	}
	cout<<"Sum: "<<sum;
	cout<<"\nProduct: "<<prdt;
	return 0;
}
