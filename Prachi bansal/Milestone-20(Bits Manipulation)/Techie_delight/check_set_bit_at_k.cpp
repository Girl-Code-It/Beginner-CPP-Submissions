#include<iostream>
#include<bitset>
using namespace std;
int getbit(int n,int k){
	return (n & (1<<(k-1))) != 0 ? 1: 0;
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<"Binary of "<<n<<" is "<<bitset<8>(n)<<"\n";
	
	if(getbit(n,k)==1){
		cout<<"Set Bit";
	}else{
		cout<<"Not set bit";
	}
	return 0;
}
