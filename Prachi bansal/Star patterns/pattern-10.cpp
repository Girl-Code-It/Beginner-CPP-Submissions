#include<iostream>
using namespace std;
int main(){
	int h,k=2;
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if(i>=1 && i<=4){
				if(j>=5-i && j<=3+i){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}
			else{
				h=i-k;
				if(j>=5-h && j<=3+h){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}
		}
		if(i>=5){
			k=k+2;
		}
		cout<<"\n";
	}
	return 0;
}
