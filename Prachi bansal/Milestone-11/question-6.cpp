//initialize and print in 2d array
#include<iostream>
using namespace std;

int main(){
	int a[50][50],n,m;
	cout<<"Enter the size of 2D array (nXm): ";
	cin>>n>>m;
	cout<<"Enter integers in the array: ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"\nThe elements are: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
