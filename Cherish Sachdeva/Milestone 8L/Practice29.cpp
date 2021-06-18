#include<bits/stdc++.h>
using namespace std;
int main(){
	int row;
	char k=64;
	cin>>row;
	for(int i=1;i<=row;i++){
		k=k+(2*(i-1))+1;
		for(int j=1;j<=row;j++){
			if(j>=6-i){
				cout<<k--;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}