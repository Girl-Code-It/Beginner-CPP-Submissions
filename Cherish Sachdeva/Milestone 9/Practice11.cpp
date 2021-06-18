#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col,k=3,m;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		m=1;
		for(int j=1;j<=col;j++){
			if(j<=5-i+k){
				cout<<m++;
			}else{
				cout<<" ";
			}
		}
		k--;
		cout<<endl;
	}
	return 0;
}