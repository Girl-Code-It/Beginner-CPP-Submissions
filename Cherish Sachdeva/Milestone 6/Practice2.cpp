#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++){
		int sum=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			cout<<i<<endl;
		}
	}
	return 0;
}