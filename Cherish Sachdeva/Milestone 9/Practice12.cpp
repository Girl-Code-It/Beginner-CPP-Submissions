#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,k;
	cin>>row;
	for(int i=1;i<=row;i++){
		k=i%2==0?6-i:1;
		for(int j=1;j<=row;j++){
			if(j<=6-i){
				if(i%2==1){
					cout<<k++;
				}else{
					cout<<k--;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}