#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a=1,sum=0;
	cin>>n;
	while(a<=n){
		if(a%2!=0){
			sum+=a;
		}
		a++;
	}
	cout<<sum;
	return 0;
}