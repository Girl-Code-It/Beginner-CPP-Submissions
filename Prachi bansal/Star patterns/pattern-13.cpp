#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		int k=0;
		for(int j=1;j<=7;j++){
			if(j>=5-i && j<=3+i){
				cout<<i+k;
				if(j>3){
					k--;
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

