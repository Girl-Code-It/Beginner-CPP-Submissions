#include<iostream>
using namespace std;
int gcd(int x,int y,int i){
	if(x%i==0 && y%i==0){
		return i;
	}
	i--;
	return gcd(x,y,i);
}
int main(){
	int x,y,i;
	cout<<"Enter two numbers: "<<endl;
	cin>>x>>y;
	cout<<"GCD: "<<endl;
	if(x>y){
		i=y;
	}else{
		i=x;
	}
	int g=gcd(x,y,i);
	cout<<g;
	return 0;
}
