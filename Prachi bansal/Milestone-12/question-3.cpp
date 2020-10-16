#include<iostream>
using namespace std;

void multiply(int a[][10], int m, int n){
	for(int i=0;i<m;i++){
		int prdt=1;
		for(int j=0;j<n;j++){
			prdt*=a[i][j];
		}
		cout<<endl<<"The product of the row "<<i+1<<" is: "<<prdt;
	}
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
	multiply(a,m,n);
}

int main(){
	input();
	return 0;
}
