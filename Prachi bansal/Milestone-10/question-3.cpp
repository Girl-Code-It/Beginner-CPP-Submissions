#include<iostream>
using namespace std;
float area(float r){
	return (3.14*r*r);
}
float circ(float r){
	return (2*3.14*r);
}
int main(){
	float d;
	cout<<"Enter radius of the circle: ";
	cin>>d;
	cout<<"\nArea of the circle is: "<<area(d);
	cout<<"\nCircumference of the circle is: "<<circ(d);
	return 0;
}
