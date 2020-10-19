#include<iostream>
using namespace std;

void display(int ar[][10], int m, int n){
	cout<<"The matrix is: "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void add(int a[][10], int b[][10], int n, int m){
	int c[10][10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"The sum of 2 matrices is: "<<endl;
	display(c,m,n);
}
void input(){
	int a[10][10], b[10][10]; 
	int m, n;
	cout<<"Enter the rows and columns: ";
	cin>>m>>n;
	cout<<"Enter the elements in 1st matrix: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements in 2nd matrix: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	add(a,b,m,n);
}

int main(){
	input();	
	return 0;
}
