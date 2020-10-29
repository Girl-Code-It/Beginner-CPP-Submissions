#include<iostream>
using namespace std;
int main(){
	int k=1,h,row=5;
	for(int i=1;i<=5;i++){
		h=k;
		for(int j=1;j<=5;j++){
			if(j>=1 && j<=i){
				cout<<h;
				h=h-(row-i+j);
			}else{
				cout<<" ";
			}
		}
		k=k+1-i+row;
		cout<<"\n";
	}
	return 0;
}

