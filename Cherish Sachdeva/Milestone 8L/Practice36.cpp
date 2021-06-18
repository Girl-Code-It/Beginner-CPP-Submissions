#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,k;
	cin>>row;
	for(int i=1;i<=row;i++){
		k=0;
		for(int j=1;j<=row;j++){
			if(j<=i){
				cout<<k*(i-1)<<" ";
				k++;

			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}