#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,k,col;
	char d;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		d='A';
		k=1;
		for(int j=1;j<=col;j++){
			if(j>=5-i && j<=3+i){
				if(j<5){
					cout<<k;
					k++;
				}else{
					cout<<d;
					d++;
				}
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}