#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col,k;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		k=i;
		for(int j=1;j<=row;j++){
			if(j<=6-i){
				cout<<k;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}