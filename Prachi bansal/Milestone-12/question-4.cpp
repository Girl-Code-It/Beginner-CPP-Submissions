#include<iostream>
using namespace std;

void display(char ar[][10], int m, int n){
	cout<<"The matrix is: "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void upperHalf(char a[][10], int m, int n){
	char b[10][10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i<=j){
				b[i][j]=a[i][j];
			}else{
				b[i][j]=(char)(32);
			}
		}
	}
	display(b,m,n);
}

void input(){
	char a[10][10]; 
	int m, n;
	cout<<"Enter the rows and columns: ";
	cin>>m>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	upperHalf(a,m,n);
}

int main(){
	input();
	return 0;
}
