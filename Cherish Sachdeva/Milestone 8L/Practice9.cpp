#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col;
	char d;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		d='A';
		for(int j=1;j<=col;j++){
			if(j<=5-i||j>=3+i){
				cout<<d;
				j<4?d++:d--;
			}else{
				cout<<" ";
				if(j==4){
					d--;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}