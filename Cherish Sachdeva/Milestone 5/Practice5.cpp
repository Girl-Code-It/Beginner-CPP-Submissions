#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,num,num1,sum=0,rem,count=0;
	cin>>n;
	num=n;
	num1=n;
	while(num!=0){
		num/=10;
		count+=1;
	}
	while(n!=0){
		rem=n%10;
		sum+=pow(rem,count);
		n/=10;
	}
	if(sum==num1){
		cout<<"Armstrong";
	}else{
		cout<<"Not Armstrong";
	}
	return 0;
}