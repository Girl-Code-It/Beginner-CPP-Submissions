#include<bits/stdc++.h>
using namespace std;
int main(){
	int row;
	cin>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j<=6-i || j>=4+i){
				cout<<"*";
			}else if(j<=i-4 || j>=14-i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}