#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	return fac;
}
int main(){
	int x;
	cin>>x;
	cout<<factorial(x)<<endl;
	return 0;
}