#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=2;i<n;i++){
		if(n%i==0){
			for(j=2;j<i;j++){
				if(i%j==0){
					break;
				}
			}
			if(i==j){
				cout<<"Prime Factors are "<<i<<endl;
			}
		}
	}
	return 0;
}