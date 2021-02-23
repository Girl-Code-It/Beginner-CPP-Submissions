#include<iostream>
#include<bitset>

using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	cout<<"Binary of "<<n<<" is "<<bitset<8>(n)<<"\n";
	while(n>0){
		if(n&1==1){
			count++;
		}
		n=n>>1;
	}
	(count%2==0)?cout<<"Even parity" : cout<<"Odd Parity";
	return 0;
}
