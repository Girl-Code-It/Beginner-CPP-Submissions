//store in array and print
#include<iostream>
using namespace std;

int main(){
	int a[10];
	cout<<"Enter integers in the array: ";
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"\nThe elements are: ";
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
