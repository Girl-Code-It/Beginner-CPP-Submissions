// Write a program to check whether a number is even or odd
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"enter a number of your choice:\n";
	cin>>x;
	if(x%2==0){
		cout<<"the number is even\n";
	}else{
		cout<<"the number is odd\n";
	}
	return 0;
}
