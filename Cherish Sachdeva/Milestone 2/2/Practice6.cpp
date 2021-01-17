#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=1,n,sum=0;
	cin>>n;
	while(a<=n){
		sum+=a;
		a++;
	}
	cout<<sum;
	return 0;
}