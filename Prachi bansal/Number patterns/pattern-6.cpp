#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		int k=5;
		for(int j=1;j<=5;j++){
			if(j>=1 && j<=6-i){
				cout<<k;
				k--;
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
