#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,fac=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		fac=fac*i;
	}
	cout<<fac;
	return 0;
}