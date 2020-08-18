#include<iostream>
using namespace std;
int dia(int r){
	cout<<"\nThe diameter of circle is: "<<2*r;
	return 0;
}
int area(int r){
	cout<<"\nThe diameter of circle is: "<<3.14*r*r;
	return 0;
}
int circum(int r){
	cout<<"\nThe diameter of circle is: "<<2*3.14*r;
	return 0;
}
main(){
	int x;
	cout<<"Enter the radius: ";
	cin>>x;
	dia(x);
	area(x);
	circum(x);
}
