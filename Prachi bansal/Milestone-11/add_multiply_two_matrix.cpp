//add and multiple two matrix
#include<iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10],d[10][10],m,n,sum=0;
	cout<<"Enter the size (mXn): ";
	cin>>m>>n;
	cout<<"Enter the elements in 1 matrix : "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements in 2 matrix : "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
		
	}
	cout<<"Array after multiplication: "<<endl; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Array after addition: "<<endl; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
