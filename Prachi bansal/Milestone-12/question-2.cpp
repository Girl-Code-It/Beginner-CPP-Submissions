//sum of left and right diagonal
#include<iostream>
using namespace std;

void Left(int a[][10], int m, int n){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	cout<<"\nThe sum of left diagonal is: "<<sum;
}

void right(int a[][10], int m, int n){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i+j==m-1){
				sum+=a[i][j];
			}
		}
	}
	cout<<"\nThe sum of right diagonal is: "<<sum;
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
	Left(a,m,n);
	right(a,m,n);
}
int main(){
	input();
	return 0;
}
