//acces all elements
#include<iostream>
using namespace std;
int main(){
	int a[10][10],m,n;
	cout<<"Enter the size (mXn): ";
	cin>>m>>n;
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=a[i][j]*2;
		}
	}
	cout<<"Array after multiplying each element by 2: "<<endl; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
