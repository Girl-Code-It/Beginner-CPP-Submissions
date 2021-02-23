#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		int k=i;
		for(int j=1;j<=col;j++){
			if(j>=5-i && j<=i+3){
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