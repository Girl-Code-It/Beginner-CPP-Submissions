#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(j>=5-i && j<=9-i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;

}