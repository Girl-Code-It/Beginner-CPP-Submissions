#include<iostream>
using namespace std;
int taxCalculator(int x, int y){
	int income,tax;
	if(y<=100000){
		income=x-y;
	}else{
		income=x-100000;
	}
	if(income<=100000){
		tax=0;
	}else if(income>100000 && income<=200000){
		tax=0.1*(income-100000); //slab 1		
	}else if(income>200000 && income<=500000){
		tax=0.2*(income-200000)+10000; //slab 2 //10000=(200000-100000)*0.1
	}else if(income>500000){
		tax=0.3*(income-500000)+10000+ 60000; //slab 3 //60000=(500000-200000)*0.2
	}
	return tax;
}

main(){
	int a,b;
	cout<<"Enter your gross salary: ";
	cin>>a;
	cout<<"\nEnter your total savings: ";
	cin>>b;
	cout<<"\nThe tax to be paid is: "<<taxCalculator(a,b);
}
