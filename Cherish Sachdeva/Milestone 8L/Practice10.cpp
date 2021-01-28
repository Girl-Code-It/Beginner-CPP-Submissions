#include<bits/stdc++.h>
using namespace std;
int main(){
	int row;
	cin>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j>=i-3 && j<=11-i && j>=5-i && j<=3+i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}