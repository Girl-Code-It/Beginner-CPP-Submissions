#include<iostream>
using namespace std;

int main(){
	int a[10][10],m,n,k=0,q=0,b=1;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter the elements in the matrix:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"The output is: "<<endl;
	for(int i=0;i<=m+n-1;i++){
		k=i;
		q=0;		
		if(i<=(n-1)){
			while(k>=0 && q<m){
				cout<<a[k][q]<<" ";
				k--;
				q++;
			}
		}else{
			q=b;
			k=i-b;
			while(k>=0 && q<m){
				cout<<a[k][q]<<" ";
				
				k--;
				q++;
			}
			b++; 
		}
		cout<<endl;
		
	}
	return 0;
}
