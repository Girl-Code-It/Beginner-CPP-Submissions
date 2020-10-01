#include<iostream>
using namespace std;
int main(){
	int a[10],n,temp;
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	temp=a[n-1];
	for(int i=n-1;i>=0;i--){
		a[i]=a[i-1];
	}
	a[0]=temp;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
