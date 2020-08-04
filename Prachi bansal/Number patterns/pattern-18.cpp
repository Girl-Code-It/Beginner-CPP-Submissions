#include<iostream>
using namespace std;
int main(){
	int h=-1,k;
	for(int i=1;i<=5;i++){
		h+=2;
		k=h;
		for(int j=1;j<=5;j++){
			if(j>=1 && j<=6-i){
				cout<<k;
				k+=2;
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
