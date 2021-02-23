#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,k;
	cin>>row;
	for(int i=1;i<=row;i++){
		k=row;
		for(int j=1;j<=row;j++){
			if(j<=6-i){
				cout<<k--;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}