//reverse of an array
#include<iostream>
using namespace std;
int main(){
	int a[10],n,b[10];
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elememts: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1,j=0;i>=0,j<n;i--,j++){
		b[i]=a[j];	
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
