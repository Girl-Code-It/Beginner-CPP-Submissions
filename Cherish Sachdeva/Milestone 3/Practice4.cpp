#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,rev,sum=0;
	cin>>n;
	while(n!=0){
		rev=n%10;
		n/=10;
		sum+=rev;
	}
	cout<<sum;
	return 0;
}