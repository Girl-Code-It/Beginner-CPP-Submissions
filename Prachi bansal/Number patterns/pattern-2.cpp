#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		int k=6-i;
		for(int j=1;j<=5;j++){
			if(j>=1 && j<=i){
				cout<<k;
				k++;	
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
