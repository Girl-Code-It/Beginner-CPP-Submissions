#include<iostream>
using namespace std;
int main(){
	int x,d,r=0;
	cout<<"Enter the number: ";
	cin>>x;
	cout<<"\nThe reverse is: ";
	while(x!=0){
		d=x%10;
		x=x/10;
		r=r*10;
		r+=d;
	}
	cout<<r;
	
	return 0;
}
