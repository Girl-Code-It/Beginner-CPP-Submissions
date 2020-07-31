#include<iostream>
using namespace std;
int main(){
	int k=0;
	for(int i=1;i<=7;i++){
		if(i>=5){
			k=k+2;
		}
		for(int j=1;j<=4;j++){
			if(i>=1 && i<=4){
				if(j>=1 && j<=i){
					cout<<"*";				
				}else{
				cout<<" ";
				}
			}else{
				if(j>=1 && j<=i-k){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
