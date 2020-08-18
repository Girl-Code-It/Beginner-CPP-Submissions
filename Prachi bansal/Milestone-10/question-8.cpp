#include<iostream>
using namespace std;
int grade(int a){
	if(a>=91 && a<=100){
		cout<<"\nAA";
	}else if(a>=81 && a<=90){
		cout<<"\nAB";
	}else if(a>=71 && a<=80){
		cout<<"\nBB";
	}else if(a>=61 && a<=70){
		cout<<"\nBC";
	}else if(a>=51 && a<=60){
		cout<<"\nCD";
	}else if(a>=41 && a<=50){
		cout<<"\nDD";
	}else if(a<=40){
		cout<<"\nFail";
	}else{
		cout<<"\nIncorrect";
	}
}
main(){
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	cout<<"\nGrade is: ";
	grade(x);
}
