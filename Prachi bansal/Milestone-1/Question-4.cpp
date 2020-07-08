#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	if(x<0){
		cout<<"\nThe number is negative";
	}else if(x>0){
		cout<<"\nThe number is positive";
	}else{
		cout<<"\nYou entered 0";
	}
	return 0;
}
