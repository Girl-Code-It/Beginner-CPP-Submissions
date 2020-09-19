#include<iostream>
using namespace std;
int main(){
	int a[10][10],m,n,flag=0;
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
			if(a[i][j]==a[j][i]){
				flag=1;
			}
		}
	}
	if(flag==1){
		cout<<"Symmetric matrix";
	}else{
		cout<<"Not symmetric";
	}
}
