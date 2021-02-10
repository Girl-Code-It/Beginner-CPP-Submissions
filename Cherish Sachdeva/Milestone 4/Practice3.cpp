#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,hcf,min;
	cin>>a;
	cin>>b;
	min=a>b?b:a;
	for(int i=1;i<=min;i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
		
	}
	cout<<hcf;
	return 0;
}