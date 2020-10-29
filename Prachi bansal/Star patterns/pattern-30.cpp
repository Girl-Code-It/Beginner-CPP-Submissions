#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=5;j++){
			if(i<=2){
				if(j>=6-i && j<=5){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}else if(i>=3 && i<=7){
					if(j>=i && j<=5 || j>=1 && j<=i-4){
						cout<<"*";
					}else{
						cout<<" ";
					}
			}else if(i>=8){
				if(j>=1 && j<=10-i){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
