#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,re,count=0;
	cin>>n;
	while(n!=0){
		re=n%10;
		n=n/10;
		count++;
	}
	cout<<count;
	return 0;
}