#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		int k=1;
		for(int j=1;j<=7;j++){
			if(j<=5-i || j>=3+i){
				cout<<(char)(64+k);
			}else{
				cout<<" ";
			}
			(j>3?k--:k++);
			}
		cout<<"\n";
	}
	return 0;
}
