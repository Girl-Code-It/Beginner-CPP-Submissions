#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
bool perfect(int n){
	int sum=0;
	int a=n;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==a){
		return true;
	}else{
		return false;
	}
}
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
	int x;
	cin>>x;
	if(armstrong(x)){
		cout<<x<<" is armstrong number"<<endl;
	}else if(perfect(x)){
		cout<<x<<" is perfect number"<<endl;
	}else if(prime(x)){
		cout<<x<<" is prime number"<<endl;
	}
	return 0;
}