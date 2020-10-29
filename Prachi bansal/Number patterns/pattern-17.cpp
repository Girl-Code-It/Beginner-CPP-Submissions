#include<iostream>
using namespace std;
int main(){
	int k;
	for(int i=1;i<=5;i++){
		if(i%2==0){
			 k=2;
		}else{
			 k=1;
		}
		for(int j=1;j<=5;j++){
			if(j>=1 && j<=i){
				if(i%2==0){
					cout<<k;
					k=k+2;
				}else{
					cout<<k;
					k=k+2;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
