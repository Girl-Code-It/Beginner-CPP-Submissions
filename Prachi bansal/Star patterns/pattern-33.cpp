#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		int k=1;
		for(int j=1;j<=7;j++){
			if(i>=2){
				if(j>=6-i && j<= 2+i){
					cout<<" ";
					k++;
				}else{
					cout<<(char)(64+k);
					k++;
				}
			}else{
				cout<<(char)(64+k);
				k++;
			}
		}
		cout<<"\n";
	}
	return 0;
}
