#include<iostream>
using namespace std;
int main(){
	int k=5;
	for(int i=1;i<=9;i++){
		int h=1;
		for(int j=1;j<=5;j++){
			if(j>=k && j<=5){
				cout<<h;
				h++;
			}else{
				cout<<" ";
			}
		}
		if(i<5){
			k--;
		}else{
			k++;
		}
		cout<<"\n";	
	}
	return 0;
}
