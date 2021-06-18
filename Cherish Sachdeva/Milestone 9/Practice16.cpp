#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,k;
	cin>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			k=(i+j)%2==0?1:0;
			if(j<=i){
				cout<<k;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}