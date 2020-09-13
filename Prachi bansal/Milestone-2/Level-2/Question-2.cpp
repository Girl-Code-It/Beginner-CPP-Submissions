#include<iostream>
using namespace std;
int main(
){
	int a;
	char m, g;
	cout<<"Enter your age: ";
	cin>>a;
	cout<<"\nEnter your maritial status: ";
	cin>>m;
	cout<<"\nEnter your gender: ";
	cin>>g;
	if(g=='f' || g=='F'){
		if(a>=20 && a<=60){
		cout<<"\nShe will work in urban area";
		}else{
			cout<<"ERROR!";
		}
		
	}else {
	if(g=='m' || g=='M'){
			if(a>=20 && a<=40){
				cout<<"He can work anywhere";
			}else if(a>40 && a<=60){
				cout<<"\nHe will work in urban areas only";
			}else {
				cout<<"ERROR!";
			}
		}
	}	
}
