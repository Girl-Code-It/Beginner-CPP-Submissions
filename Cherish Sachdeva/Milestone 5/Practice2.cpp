#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,i,j;
	cin>>a;
	cin>>b;
	for(i=a;i<b;i++){
		for(j=2;j<=i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			cout<<i<<endl;
		}
	}
	return 0;
}