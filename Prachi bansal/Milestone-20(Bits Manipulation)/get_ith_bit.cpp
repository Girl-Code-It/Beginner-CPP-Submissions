#include<iostream>
using namespace std;

//find the ith bit in the binary representation
int getBit(int n,int i){
	return (n & (1<<i)) != 0 ? 1 : 0 ;
}

//set bit set 1 to ith position and output is the decimal number formed after setting the bit
int setBit(int n,int i){
	return n | (1<<i);
}
//clear the ith bit which means making it 0
int clearBit(int n,int  i){
	int mask = ~(1<<i);
	n = n & mask;
	return n;
}
int main(){
	int n,i;
	cin>>n>>i;
	cout<<getBit(n,i)<<endl;
	return 0;
}
