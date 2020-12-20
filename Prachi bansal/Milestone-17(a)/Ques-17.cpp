#include<iostream>
using namespace std;
int pow(int x,int y){
	if(y==1){
		return x;
	}
	return x*pow(x,y-1);
}
int main(){
	int x,y;
	cout<<"Enter the base and exponent: ";
	cin>>x>>y;
	cout<<"Result is: "<<pow(x,y);
	return 0;
	
}
