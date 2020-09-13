#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=9;j++){
			if(j>=6-i && j<= 4+i){
				if(i%2!=0 && j%2==0 || i%2==0 && j%2!=0){
					cout<<" ";
				}else{	
					if(i%2==0){
						cout<<"*";
					}else{
						cout<<"*";
					}
				}
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
