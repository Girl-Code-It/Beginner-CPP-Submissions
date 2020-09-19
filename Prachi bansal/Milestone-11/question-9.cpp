//split array in two different array
#include<iostream>
using namespace std;

int main(){
	int a[10],c[10],b[10];
	cout<<"Enter integers in the array: ";
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0,k=5;i<5,k<10;i++,k++){
		b[i]=a[i];
		c[i]=a[k];
	}
	cout<<"Array is: "<<endl;
	for(int i=0;i<5;i++){
		cout<<b[i]<<" ";
	}
	cout<<"\nOther array is: ";
	for(int i=0;i<5;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
