#include<iostream>
using namespace std;
int main(){
	int k=1,h;
	for(int i=1;i<=5;i++){
		k=i-1;
		for(int j=1;j<=5;j++){
			if(j>=1 && j<=i){
				if(j>=2){
					h=j-1;
					k=i-1;
					k=k*h;
					cout<<k;			
				}else{
					cout<<0;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

