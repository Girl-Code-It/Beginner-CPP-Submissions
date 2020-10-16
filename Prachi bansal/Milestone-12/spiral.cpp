#include<iostream>
using namespace std;
int main(){
	int m,n,t,l,r,b,dir=0;
	int a[10][10];
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter the elements in the matrix:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	t=0;
	l=0;
	r=m-1;
	b=n-1;
	cout<<"The elements in spiral are: "<<endl;
	while(t<=b && l<=r){
		if(dir==0){
			for(int i=l;i<=r;i++){
				cout<<a[t][i]<<" ";
			}
			t++;
			dir++;
		}
		else if(dir==1){
			for(int i=t;i<=b;i++){
				cout<<a[i][r]<<" ";
			}
			r--;
			dir++;
		}
		else if(dir==2){
			for(int i=r;i>=l;i--){
				cout<<a[b][i]<<" ";
			}
			b--;
			dir++;
		}
		else if(dir==3){
			for(int i=b;i>=t;i--){
				cout<<a[i][l]<<" ";
			}
			l++;
			dir=0;
		}
	}
	return 0;
}
