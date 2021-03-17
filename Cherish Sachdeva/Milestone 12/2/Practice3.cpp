#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[4][6],mult;
	for(int i=0;i<4;i++){
		for(int j=0;j<6;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<4;i++){
		mult=1;
		for(int j=0;j<6;j++){
			mult*=a[i][j];
		}
		cout<<mult<<"\n";
	}
	return 0;
}