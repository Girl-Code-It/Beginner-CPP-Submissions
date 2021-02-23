#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col,k;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		k=1;
		for(int j=1;j<=col;j++){
			if(j>=6-i && j>=i-4){
				cout<<k;
				k++;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
