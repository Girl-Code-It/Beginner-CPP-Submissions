//swapping numbers using XOR
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"Before swapping: ";
	cout<<"a : "<<a<<" b : "<<b<<endl;
	cout<<"After swapping: ";
	a=a^b;
	b=b^a;  //which is same as b^(a^b)
	a=a^b;  //same as a^(b^a)
	cout<<"a : "<<a<<" b : "<<b;
	return 0;
}
