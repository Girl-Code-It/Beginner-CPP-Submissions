#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if(j>=1 && j<=i){
				if(j%2==0){
					cout<<0;
				}else{
					cout<<1;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
