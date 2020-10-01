//reverse the array
#include<iostream>
using namespace std;

int main(){
	int a[10],b[10];
	cout<<"Enter integers in the array: ";
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0,k=9;i<10, k>=0;i++, k--){
		b[k]=a[i];
	}
	cout<<"\nThe array in reverse order is: ";
	for(int i=0;i<10;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
