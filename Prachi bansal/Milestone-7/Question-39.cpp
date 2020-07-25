#include<iostream>
using namespace std;
int main(){
	long long x,n;
	int d,place=1,oct=0;
	int ar[]={0,1,10,100,11,101,110,111};
	cout<<"enter the binary number: ";
	cin>>n;
	cout<<"\nThe octal number is: ";
	x=n;
	while(x!=0){
		d=x%1000;
		for(int i=0;i<=7;i++){
			if(d==ar[i]){
				oct= (i*place) +oct;
			}
		}
		place*=10;
		x/=1000;
	}
	cout<<oct;
	return 0;
}
