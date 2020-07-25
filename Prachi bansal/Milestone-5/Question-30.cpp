#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x,n,d,m=0,i=0,z;
	cout<<"Enter a number: ";
	cin>>x;
	n=x;
	z=x;
	while(z!=0){
		d=z%10;
		z/=10;
		i++;
	}
	while(n!=0){
		d=n%10;
		m+=pow(d,i);
		n/=10;
	}
	if(m==x){
		cout<<"\nIt is an amstrong number";
	}else{
		cout<<"\nIt is not armstrong number";
	}
	return 0;
}
