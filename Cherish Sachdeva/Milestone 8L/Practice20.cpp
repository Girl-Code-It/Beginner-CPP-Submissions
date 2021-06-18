#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col,k;
	char d;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		d='A';
		k=1;
		for(int j=1;j<=col;j++){
			if(j>=5-i && j<=4+i){
				if(j<5){
					cout<<d;
					d++;
				}else{
					cout<<k;
					k++;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}