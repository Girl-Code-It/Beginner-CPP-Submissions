#include<iostream>
using namespace std;
int cube(int a){
	return (a*a*a);
}
main(){
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	cout<<"\nThe cube of the number is: "<<cube(x);
}
