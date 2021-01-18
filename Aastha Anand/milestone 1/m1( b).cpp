//Write a program to print a maximum of two numbers
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter two numbers of your choice:\n";
	cin>>x>>y;
	
	if(x>y){
		cout<<"the largest of the two numbers is: "<<x;
	}else{
		cout<<"the largest of the two numbers is: "<<y;
	}
	return 0;
}
