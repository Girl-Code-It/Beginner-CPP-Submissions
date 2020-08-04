#include<iostream>
using namespace std;
int main(){
	int k;
	for(int i=1;i<=5;i++){
		int k=6-i;
		for(int j=1;j<=5;j++){
			if(j>=i && j<=5){
				cout<<5;
			}else{
				cout<<k;
				k++;
			}
		}
		cout<<"\n";
	}
	return 0;
}
