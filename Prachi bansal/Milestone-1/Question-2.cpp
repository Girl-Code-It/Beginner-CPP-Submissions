#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter first number: ";
	cin>>x;
	cout<<"\neneter second number: ";
	cin>>y;
	if(x>y){
		cout<<"\n"<<x<<" is greater than "<<y;  
	}else{
		cout<<"\n"<<y<<" is greater than "<<x;
	}
	

	return 0;
}
