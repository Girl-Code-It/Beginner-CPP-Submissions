#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Do you have any medical issue: ";
	cin>>ch;
	if(ch=='Y' || ch=='y'){
		cout<<"You are not allowed to sit for the exam";	
	}else if(ch=='N' || ch=='n'){
		cout<<"You are allowed to sit for the exam ";
		
	}
	return 0;
}
