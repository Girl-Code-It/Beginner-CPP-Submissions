#include<iostream>
using namespace std;
int main(){
	int k;
	for(int i=1;i<=5;i++){
		if(i%2==0){
			k=6-i;
		}else{
			k=1;
		}
		for(int j=1;j<=7;j++){
			if(j>=1 && j<=6-i){
				cout<<k;
				if(i%2==0){
					k--;;
				}else{
					k++;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
