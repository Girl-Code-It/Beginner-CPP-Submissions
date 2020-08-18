#include<iostream>
using namespace std;
inline int add(void){
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	return(a+b);
}
int main(){
	cout<<"addition of two numbers is: "<<add();
	return 0;
}
