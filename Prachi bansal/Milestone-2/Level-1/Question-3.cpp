#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter the quantity of product: ";
	cin>>x;
	cout<<"\nEach product costs Rs 100";
	y=x*100;
	cout<<"\nTotal cost of purchase is: "<<y;
	if(y>1000){
		cout<<"\nYou will get a 10% discount";
		cout<<"\nYour payable amount is: "<<0.9*y;
	}else{
		cout<<"\nYou need to purchase more than Rs 1000 to avail discount";
	}
	return 0;
	
}
