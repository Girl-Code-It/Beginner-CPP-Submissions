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

void multiply(int a[][10], int b[][10], int n, int m,int l){
	int c[10][10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int t=0;t<l;t++)
			c[i][j]+=a[i][t]*b[t][j];
		}
		
	}
	cout<<"The product of 2 matrices is: "<<endl;
	display(c,m,l);
}
void input(){
	int a[10][10], b[10][10]; 
	int m, n,l;
	cout<<"Enter the rows and columns of 1st matrix: ";
	cin>>m>>n;
	cout<<"Enter the elements in 1st matrix: "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl<<"Enter the rows and columns of 2nd matrix: ";
	cin>>n>>l;
	cout<<"Enter elements in 2nd matrix: "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	multiply(a,b,m,n,l);
}

int main(){
	input();	
	return 0;
}
