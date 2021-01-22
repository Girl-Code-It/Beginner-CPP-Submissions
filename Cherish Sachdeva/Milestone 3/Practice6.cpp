#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,rev;
	cin>>n;
	while(n!=0){
		rev=n%10;
		n/=10;
		cout<<rev;
	}
	return 0;
}