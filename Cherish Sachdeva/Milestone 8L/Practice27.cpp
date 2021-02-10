#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(j>=5-i && j<=3+i){
				if(j<=4){
					cout<<5-j;
				}else{
					cout<<j-3;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}