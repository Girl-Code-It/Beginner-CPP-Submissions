#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ld,fd;
	cin>>n;
	ld=n%10;
	cout<<"Last Digit is "<<ld<<endl;
	while(n>=10){
		n/=10;
	}
	cout<<"First Digit is "<<n<<endl;
	return 0;
}