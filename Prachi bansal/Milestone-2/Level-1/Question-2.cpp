#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter the 1st no.: ";
	cin>>x;
	cout<<"\nEnter the 2nd no.: ";
	cin>>y;
	if(x>y){
		cout<<"\n"<<x<<" is greater than "<<y;
	}else{
		cout<<"\n"<<y<<" is greater than "<<x;
	}
	return 0;
	
}
