#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,n;
	cin>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			n=j%2==0?0:1;
			cout<<n;
		}
		cout<<endl;
	}
	return 0;
}