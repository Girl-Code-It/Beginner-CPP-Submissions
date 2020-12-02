#include<iostream>
using namespace std;
int main(){
	int n,fn,ln;
	cout<<"finding the first and last digit of a number:\n";
	cout<<"=========================================================\n";
	cout<<"Enter n\n ";
	cin>>n;
	fn=n;
	ln=n%10;
	for(fn=n;fn>=10;fn=fn/10);
	cout<<"the first digit is :  "<<fn<<endl;
	cout<<"the last digit is  :  "<<ln<<endl;
	
	}
