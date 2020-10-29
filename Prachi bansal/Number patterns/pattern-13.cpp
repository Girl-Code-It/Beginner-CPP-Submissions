#include<iostream>
using namespace std;
int main(){
	int k=5;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j>=1 && j<=6-i){
				cout<<k;
			}else{
				cout<<" ";
			}
		}
		k--;
		cout<<"\n";
	}	
	return 0;
}
