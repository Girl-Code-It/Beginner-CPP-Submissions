#include<iostream>

using namespace std;
int main(){
	int x,n,d;
	cout<<"Enter the number: ";
	cin>>x;
	n=x;
	
	while(n!=0){
	d=n%10;
	cout<<d;
	n=n/10;
	}
return 0;
}

