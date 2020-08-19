#include<iostream>
using namespace std;
inline int prdt(void){
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	return(a*b);
}
int main(){
	cout<<"product of two numbers is: "<<prdt();
	return 0;
}
