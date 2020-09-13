#include<iostream>
using namespace std;
int main(){
	int k=7;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=7;j++){
			if(j>=1 && j<=k){
				cout<<j;
			}else{
				cout<<" ";
			}
		}
		k=k-2;
		cout<<"\n";
	}
	return 0;
}
