#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j==i || j+i==6){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
