//print array elements
#include<iostream>
using namespace std;

int main(){
	int m, a[50];
	cout<<"enter the size: ";
	cin>>m;
	cout<<"enter the array: "<<endl;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	cout<<"the array is: "<<endl;
	for(int i=0;i<m;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
