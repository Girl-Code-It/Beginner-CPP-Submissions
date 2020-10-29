#include<iostream>
using namespace std;
int main(){
	int k=7;
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if(j>=1 && j<=8-i){
				cout<<k-j;
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
		k--;
	}
	return 0;
}
