//even and odd in same array but separately 
#include<iostream>
using namespace std;
int main(){
	int a[10],n,b[10],j=0;
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elememts: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			b[j]=a[i];
			j++;
		}
	}
	cout<<"\nOutput in sorted order: ";
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
