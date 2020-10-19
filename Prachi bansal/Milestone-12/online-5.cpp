#include<iostream>
using namespace std;
int main(){
	int m,n,p,q,a[10][10],b[10][10];
	cout<<"Entre the number of rows and columns: ";
	cin>>m>>n;
	cout<<"Enter the matrix: ";
	cout<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1){
				for(int k=0;k<n;k++){
					b[i][k]=1;
				}
				for(int k=0;k<m;k++){
					b[k][j]=1;
				}	
			}
		}
	}
	cout<<"The output is: "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
