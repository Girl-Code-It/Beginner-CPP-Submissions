#include<iostream>
using namespace std;
int main(){
	int x,fact=1;
	cout<<"Enter the number to find factorial: ";
	cin>>x;
	for(int i=1;i<=x;i++){
		fact*=i;
	}
	cout<<"\nThe factorial of "<<x<<" is: "<<fact;
	return 0;
}
