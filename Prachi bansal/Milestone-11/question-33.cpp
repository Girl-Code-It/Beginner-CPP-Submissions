//merge two array
#include<iostream>
using namespace std;

int main(){
	int a[10],b[10],c[20],n,m,temp;
	cout<<"Enter the size of two arrays: ";
	cin>>n>>m;
	cout<<"Enter the elememts in array 1: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the elememts in array 2: ";
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int j=0;j<n;j++){
		c[j]=a[j];
	}
	for(int j=n, i=0;j<n+m,i<m;j++,i++){
		c[j]=b[i];
	}
	for(int i=0;i<m+n;i++){
		for(int j=i+1;j<m+n;j++){
			if(c[i]>c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(int i=0;i<m+n;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
