#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter the age of all the three: ";
	cin>>x>>y>>z;
	if(x>y){
		if(x>z){
			cout<<"\n"<<x<<" is the oldest";
		}else{
			cout<<"\n"<<z<<" is oldest";
			cout<<"\n"<<y<<" is youngest";
		}
	
	}else{
		if(y>z){
			cout<<"\n"<<y<<" is oldest";
			cout<<"\n"<<z<<" is youngest";
		}else{
			cout<<"\n"<<z<<" is oldest";
			cout<<"\n"<<x<<" is youngest";
		}
	}
	return 0;
}
