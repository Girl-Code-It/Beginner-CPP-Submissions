#include<bits/stdc++.h>
using namespace std;
int main(){
	int row;
	cin>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j==6-i || j==i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}