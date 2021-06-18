//Write a program to check whether a number is negative, zero, positive
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"enter a number of your choice:\n";
	cin>>x;
	if(x>0){
		cout<<"the number is positive.\n";
	}else if(x<0){
		cout<<"the number is negative.\n";
	}else{
		cout<<"the number is zero.\n";
	}
	return 0;
}
