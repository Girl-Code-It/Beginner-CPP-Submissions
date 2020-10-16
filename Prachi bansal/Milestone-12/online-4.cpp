#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int m,n,l=0,b,t=0,r,dir=0,j,y=0,c=1;
	char a[50][50];
	char x='X';
	cout<<"Entre the number of rows and columns: ";
	cin>>m>>n;
	b=m-1;
	r=n-1;
		while(t<m && l<n){
			if(dir==0){
				for(int i=l;i<=r;i++){
					a[t][i]=x;
				}
				dir++;
				t++;
			}
			if(dir==1){
				for(int i=t;i<=b;i++){
					a[i][r]=x;
				}
				dir++;
				r--;
			}
			if(dir==2){
				for(int i=r;i>=l;i--){
					a[b][i]=x;
				}
				dir++;
				b--;
			}
			if(dir==3){
				for(int i=b;i>=t;i--){
					a[i][l]=x;
				}
				dir=0;
				l++;
			}
			c++;
			if(x=='X'){
				x='0';
			}else{
				x='X';
			}
			if(m>=4){
				y++;
			}
			if(m%2==0 && c==m+1-y){
				break;
			}
		}
		
	for(int i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<" "<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
