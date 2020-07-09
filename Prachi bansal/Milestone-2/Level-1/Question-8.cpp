#include<iostream>
using namespace std;
int main(){
	float x,y;
	float z;
	cout<<"Enter the total no. of classes held: ";
	cin>>x;
	cout<<"\nEnter the no. of classes attended: ";
	cin>>y;
	z = (y/x)*100;
	cout<<"\nYour attendence is "<<z<<"%";
	if(z<75){
		cout<<"\nYou are not allowed to sit in the exam";
	}else{
		cout<<"\nYou can give the exam";
	}
	
	return 0;
}
