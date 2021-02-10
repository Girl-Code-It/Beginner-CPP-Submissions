#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col,k;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		k=1;
		for(int j=1;j<=col;j++){
			if(j>=5-i && j<=3+i){
				cout<<k;
				j<4?k++:k--;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}