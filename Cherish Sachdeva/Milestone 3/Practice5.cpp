#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,rev,p=1;
	cin>>n;
	while(n!=0){
		rev=n%10;
		n/=10;
		p*=rev;
	}
	cout<<p;
	return 0;
}