#include<iostream>
#include<bitset>
using namespace std;

int main(){
	int n,i=0;
	cin>>n;
	cout<<"Binary of "<<n<<" is "<<bitset<8>(n)<<"\n";
	while(n>0){
		if(n&1==1){
			break;
		}
		n=n>>1;
		i++;
	}
	cout<<"Position of set bit "<<i+1;
	return 0;
}
