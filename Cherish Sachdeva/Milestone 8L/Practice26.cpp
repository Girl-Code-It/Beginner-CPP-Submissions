#include<bits/stdc++.h>
using namespace std;
int main(){
	int row;
	char k;
	cin>>row;
	for(int i=1;i<=row;i++){
		k=64+i;
		for(int j=1;j<=row;j++){
			if(j<=i){
				cout<<k--;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}