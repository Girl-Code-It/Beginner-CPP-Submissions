#include<iostream>
using namespace std;
int main(){
	int x,sum=0,d;
	cout<<"Enter the number: ";
	cin>>x;
	while(x!=0){
		d=x%10;
		sum+=d;
		x/=10;
	}
	cout<<"\nSum of digits are: "<<sum;
	return 0;
}
