#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		for(int k=4;k>=i;k--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		if(i>1){
			for(int k=i-1;k>=1;k--){
				cout<<k;
			}
		}
		cout<<"\n";
	}
	return 0;
}
