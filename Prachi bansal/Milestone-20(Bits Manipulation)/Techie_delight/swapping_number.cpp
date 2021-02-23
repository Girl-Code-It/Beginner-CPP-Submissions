#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	cout<<"x: "<<x<<" y: "<<y;
	x=x^y;
	y=x^y;
	x=x^y;
	cout<<"\nAfter Swapping\n";
	cout<<"x: "<<x<<" y: "<<y;
	return 0;
}
