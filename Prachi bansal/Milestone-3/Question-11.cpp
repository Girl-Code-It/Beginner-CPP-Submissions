#include<iostream>
using namespace std;
int main(){
	int d,x,y,k=0;
	
	cout<<"Enter the number: ";
	cin>>x;
	y=x;
	while(y!=0){
		y/=10;
		k++;
	}
	d=x%10; //last digit
	cout<<"\nLast digit is: "<<d;
	for(int i=0;i<k-1;i++){
		x/=10;
	}
	cout<<"\nFirst digit is: "<<x;
	return 0;
}
