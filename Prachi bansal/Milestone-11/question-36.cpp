//search in an array
#include<iostream>
using namespace std;
int main(){
	int a[10],n,b[10],m;
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elememts: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the number to be searched: ";
	cin>>m;
	for(int i=0;i<n;i++){
		if(a[i]==m){
			cout<<m<<" found at position "<<i+1;
		}
	}
	return 0;
}
