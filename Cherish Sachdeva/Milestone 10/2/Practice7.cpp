#include<bits/stdc++.h>
using namespace std;
bool strong(int n){
	int a=n,sum=0,rem,pro;
	while(n!=0){
		rem=n%10;
		pro=1;
		for(int i=1;i<=rem;i++){
			pro*=i;
		}
		sum+=pro;
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
		if(strong(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
