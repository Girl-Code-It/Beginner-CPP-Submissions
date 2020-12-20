#include<iostream>
using namespace std;
int temp;
int sort(int a[],int i,int n){
	if(i<=n-2){
		if(a[i]<a[i+1]){
			return sort(a,i+1,n);
		}else{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			return sort(a,i+1,n);
		}	
	}
	for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			return sort(a,j,n);
		}
	}
	for(int j=0;j<n;j++){
		cout<<a[j]<<" ";
	}
	return 0;
}
int main(){
	int n;
	cout<<"Number of elements: ";
	cin>>n;
	int a[n];
	cout<<"\nElements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,0,n);
	return 0;
}
