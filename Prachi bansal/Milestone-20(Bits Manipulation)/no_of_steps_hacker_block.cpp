//finding number of steps to reach a level and one step 
//is in powers of 2 the number of steps to reach
//to reach 13 steps will be 3 steps are 8, 4, 1
//the best way is number of set bits in level n
//13 = 1101 set bits are 3  so ans is 3

#include<iostream>
using namespace std;
int setbits(int n){
	int count=0;
	while(n>0){
		count+=(n&1);
		n=n>>1;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<setbits(n);
	return 0;
}
