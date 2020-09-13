#include<iostream>
using namespace std;
int vote(int x){
	if(x>=18){
		cout<<"\nYou are eligible to vote.";
	}else{
		cout<<"\nNot eligible.";
	}
}
main(){
	int a;
	cout<<"Enter your age: ";
	cin>>a;
	vote(a);	
}
