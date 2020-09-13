#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if(i==2 || i==6){
				if(j>=2 && j<=6){
					cout<<" ";
				}else{
					cout<<"*";
				}
			}else if(i>=3 && i<=5){
				if(j==2 || j==6){
					cout<<" ";
				}else if(i==4 && j==4){
					cout<<" ";
				}else{
					cout<<"*";
				}
			}else{
				cout<<"*";
			}
		}
		cout<<"\n";
	}
	return 0;
}
