#include<iostream>
using namespace std;
int main(){
	int n,d,x,i=0,y;
	cout<<"Enter the number: ";
	cin>>x;
	y=x;
	d=x%10; //last digit
	cout<<"\nLast digit is: "<<d;
	while(x!=0){
		x=x/10;
		i++;
	}
	for(int j=0;j<i-1;j++){
		y/=10;
	}
	cout<<"\nFirst digit is: "<<y;
	cout<<"\nSum of first and last digit is: "<<d+y;
	return 0;
}
