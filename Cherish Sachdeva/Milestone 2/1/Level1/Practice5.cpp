#include<bits/stdc++.h>
using namespace std;
int main(){
	int marks;
	cin>>marks;
	cout<<"Enter the marks of students "<<marks<<endl;
	if(marks>80){
		cout<<"A"<<endl;
	}else if(marks>60){
		cout<<"B"<<endl;
	}else if(marks>50){
		cout<<"C"<<endl;
	}else if(marks>45){
		cout<<"D"<<endl;
	}else if(marks>25){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
	}
	return 0;
}