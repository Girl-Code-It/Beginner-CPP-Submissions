#include<iostream>
using namespace std;

int main(){
	//m=rows,n=columns
	int a[10][10]={{3,2,7},{4,6,5},{23,25,62}},min,i,j,k,l;
	min=INT_MAX;
	int m,n,p,size=1;
	cout<<"Enter the number of rows and columns:";
	cin>>n>>m;
	cout<<"Enter the elements in the matrix:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]<min){
				min=a[i][j];
			}
		}
	}
	cout<<"MIN: "<<min;
	p=min;
	for(k=0;k<m;k++){
		for(l=0;l<n;l++){
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					if(p+1==a[i][j]){
						size++;
						p=a[i][j];
					}
				}
			}
		}
	}
	cout<<"the output is: "<<size;
	return 0;
}
