#include<iostream>
using namespace std;
int multiply(int rone,int cone,int rtwo,int ctwo){
	static int sum,i=0,j=0,k=0;
    if(i<rone){ 
    	if(j<ctwo){  
        	 if(k<cone{
	             sum=sum+arm[i][k]*brm[k][j];
	             k++;
	             multiplyMatrix(arm,brm);
        	 }
         	crm[i][j]=sum;
             sum=0;
             k=0;
             j++;
             multiplyMatrix(arm,brm);
    	}
	    j=0;
	    i++;
	    multiplyMatrix(arm,brm);
    }
}
int main(){
	int n,m;
	cout<<"Enter the rows and columns of 1st matrix: ";
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int r,c;
	cout<<"Enter the rows and columns of 1st matrix: ";
	cin>>r>>c;
	int b[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>b[i][j];
		}
	}
	multiply()
}
