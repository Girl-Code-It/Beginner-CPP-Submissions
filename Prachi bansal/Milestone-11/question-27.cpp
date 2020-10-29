//insert an element
#include<iostream>
using namespace std;
int main(){
	int a[20],n,index,k,num,m,b[20];
	cout<<"Enter the size: ";
	cin>>m;
	n=m;
	cout<<"Enter array: ";
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	cout<<"Enter the position: ";
	cin>>index;
	index=index-1;
	cout<<"Enter the number: ";
	cin>>num;
	for(k=0;k<index;k++){
		b[k]=a[k];
	}
	b[k]=num;
	m=m+1;
	for(int j=k+1, i=index;j<m,i<n;j++,i++){
		b[j]=a[i];
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
