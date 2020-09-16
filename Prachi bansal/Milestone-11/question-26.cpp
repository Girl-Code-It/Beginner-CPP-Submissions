//count total number of even and odd elements
#include<iostream>
using namespace std;
int main(){
	int ar[20],m,b[20];
	cout<<"enter the size of array: ";
	cin>>m;
	cout<<"enter the array: ";
	for(int i=0;i<m;i++){
		cin>>ar[i];
		b[i]=ar[i];
	}
	cout<<"\nelements in array are: ";
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
