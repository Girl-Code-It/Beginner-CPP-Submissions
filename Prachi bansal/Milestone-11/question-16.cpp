//selection sort
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
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"The sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
