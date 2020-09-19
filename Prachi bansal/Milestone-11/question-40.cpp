//rotate array right
#include<iostream>
using namespace std;
int main(){
	int a[10],n,b[10],j=0,x;
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elememts: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the number of times to rotate right: ";
	cin>>x;
	for(int i=n-x;i<n;i++){
		b[j]=a[i];
		j++;
	}
	for(int i=0;i<=n-x-1;i++){
		b[j]=a[i];
		j++;
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
