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

void sum(int a[][10], int m, int n){
	int total=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			total+=a[i][j];
		}
	}
	cout<<"The sum of the matrix is: "<<total;
}

void Row_Sum(int a[][10], int m, int n){
	for(int i=0;i<m;i++){
		int total=0;
		for(int j=0;j<n;j++){
			total+=a[i][j];
		}
		cout<<endl<<"Sum of row "<<i+1<<" numbers: "<<total;
	}
}

void Col_Sum(int a[][10], int m, int n){
	for(int i=0;i<m;i++){
		int total=0;
		for(int j=0;j<n;j++){
			total+=a[j][i];
		}
		cout<<endl<<"Sum of col "<<i+1<<" numbers: "<<total;
	}
}

void transpose(int a[][10], int m, int n){
	int b[10][10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	cout<<endl;
	cout<<"The transposed matrix is "<<endl;
	display(b,m,n);
}

void input(){
	int a[10][10], m, n;
	cout<<"Enter the rows and columns: ";
	cin>>m>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	display(a,m,n);
	sum(a,m,n);
	cout<<endl;
	Row_Sum(a,m,n);
	cout<<endl;
	Col_Sum(a,m,n);
	cout<<endl;
	transpose(a,m,n);
}

int main(){
	input();
	return 0;
}
