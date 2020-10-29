#include<iostream>
using namespace std;
int main(){
	int d, freq[10];
	long long x,num;
	cout<<"Enter the number: ";
	cin>>num;
	for(int i=0;i<10;i++){
		freq[i]=0;
	}
	x=num;
	while(x!=0){
		d=x%10;
		freq[d]++;
		x/=10;	
	}
	for(int i=0;i<10;i++){
		cout<<"\nFrequency of "<<i<<" is "<<freq[i];
	}
	return 0;
}
