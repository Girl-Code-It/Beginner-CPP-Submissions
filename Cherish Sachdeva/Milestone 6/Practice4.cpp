#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum,rem,a,fac;
	cin>>n;
	for(int i=1;i<=n;i++){
		a=i;
		sum=0;
		while(a!=0){
			rem=a%10;
			fac=1;
			for(int j=1;j<=rem;j++){
				fac=fac*j;
			}
			sum+=fac;
			a/=10;
		}
		if(sum==i){
			cout<<i<<endl;
		}
	}
	return 0;
}