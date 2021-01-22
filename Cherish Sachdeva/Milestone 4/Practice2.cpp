#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<"Factors are "<<i<<endl;
		}else{
			continue;
		}
	}
	return 0;
}