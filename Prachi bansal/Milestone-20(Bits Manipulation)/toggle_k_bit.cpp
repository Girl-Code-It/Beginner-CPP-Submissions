#include<iostream>
#include<bitset>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	cout<<"Binary of "<<n<<" is "<<bitset<8>(n)<<"\n";
	n = n^(1<<(k-1));
	cout<<"Binary of "<<n<<" is "<<bitset<8>(n)<<"\n";
	return 0;
}
