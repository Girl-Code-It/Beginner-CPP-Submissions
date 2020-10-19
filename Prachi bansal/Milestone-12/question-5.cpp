#include<iostream>
using namespace std;

void MidRow(int a[][10], int m, int n){
	int k=0,b[10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==m/2){
				b[k]=a[i][j];
				k++;
			}
		}
	}
	cout<<"\nElements in middle row are: ";
	for(int k=0;k<m;k++){
		cout<<b[k]<<" ";
	}
}

void MidCol(int a[][10], int m, int n){
	int k=0,b[10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==m/2){
				b[k]=a[i][j];
				k++;
			}
		}
	}
	cout<<"\nElements in middle column are: ";
	for(int k=0;k<m;k++){
		cout<<b[k]<<" ";
	}
}

void input(){
	int a[10][10]; 
	int m, n;
	cout<<"Enter the rows and columns: ";
	cin>>m>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	MidRow(a,m,n);
	MidCol(a,m,n);
}

int main(){
	input();
	return 0;
}
