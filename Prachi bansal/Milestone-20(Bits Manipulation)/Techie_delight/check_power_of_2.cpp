#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;

int main(){
	int n,i=0;
	cin>>n;
	cout<<"Binary of "<<n<<" is "<<bitset<8>(n)<<"\n";
	if(n&(n-1)){    			//n will have only one set bit and when AND with n-1 the ans should be 0 
		cout<<"Not power of 2";	//if it is not then it does not have only one set bit and hence not power of two
	}else{
		cout<<"Yes it is in power of 2";
	}
	
	return 0;
}
