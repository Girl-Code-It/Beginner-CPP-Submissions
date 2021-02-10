#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col,k,n;
	char d;
	cin>>row;
	cin>>col;
	for(int i=1;i<=row;i++){
		k=1;
		n=1;
		d='A';
		for(int j=1;j<=col;j++){
			if(j>=5-i && j<=3+i && k){
				if(i%2==0){
					cout<<d;
					d++;
				}else{
					cout<<n;
					n++;
				}
				k=0;
			}else{
				cout<<" ";
				k=1;
			}
		}
		cout<<endl;
	}
	return 0;
}