#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2,op,sum;
	cin>>n1>>n2>>op;
	int a[n1][n2],b[n2][n1];
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			cin>>a[i][j];
		}
	}
	if(op==1){
		for(int i=0;i<n1;i++){
			for(int j=0;j<n2;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}	
	}
	else if(op==2){
		sum=0;
		for(int i=0;i<n1;i++){
			for(int j=0;j<n2;j++){
				sum+=a[i][j];
			}
			cout<<"\n";
		}
		cout<<sum;	
	}
	else if(op==3){
		for(int i=0;i<n1;i++){
			sum=0;
			for(int j=0;j<n2;j++){
				sum+=a[i][j];
			}
			cout<<sum<<"\n";
		}	
	}
	else if(op==4){
		for(int j=0;j<n2;j++){
			sum=0;
			for(int i=0;i<n1;i++){
				sum+=a[i][j];
			}
			cout<<sum<<"\n";
		}	
	}
	else{
		for(int i=0;i<n1;i++){
			for(int j=0;j<n2;j++){
				b[i][j]=a[j][i];
			}
		}
		for(int i=0;i<n1;i++){
			for(int j=0;j<n2;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<"\n";
		}	
	}
	return 0;
}