#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=7;j++){
			if(j>=5-i && j<=3+i){
				if(j<=4){
					cout<<5-j;
				}else if(j>4){
					cout<<j-3;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
