#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b=1,c,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}