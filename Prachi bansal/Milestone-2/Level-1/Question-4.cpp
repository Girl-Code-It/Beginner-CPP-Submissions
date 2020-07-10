#include<iostream>
using namespace std;
int main(){
	int s,y;
	cout<<"Enter your salary: ";
	cin>>s;
	cout<<"\nEnter your years of service: ";
	cin>>y;
	if(y>5){
		cout<<"\nYour salary after bonus is: "<<0.5*s+s;
	}else{
		cout<<"\nNo Bonus!";
	}
	return 0;
}
