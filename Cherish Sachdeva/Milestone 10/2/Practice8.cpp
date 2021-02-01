#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n){
	int a=n,sum=0,rem;
	while(n!=0){
		rem=n%10;
		sum+=rem*rem*rem;
		n/=10;
	}
	if(sum==a){
		return true;
	}else{
		return false;
	}
}
int main(){
	int i,a,b;
	cin>>a;
	cin>>b;
	for(i=a+1;i<b;i++){
		if(armstrong(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
