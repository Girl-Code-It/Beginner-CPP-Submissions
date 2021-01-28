#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(j<=6-i||j>=4+i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}