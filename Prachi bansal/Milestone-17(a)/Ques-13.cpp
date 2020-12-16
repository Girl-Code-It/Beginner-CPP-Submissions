#include<iostream>
using namespace std;
int lcm(int x,int y,int i){
	if(i%x==0 && i%y==0){
		return i;
	}
	return lcm(x,y,i+1);
}
int main(){
	int x,y,i;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	cout<<"Lcm of the numbers is: ";
	if(x>y){
		i=x;
	}else{
		i=y;
	}
	cout<<lcm(x,y,i);
}
