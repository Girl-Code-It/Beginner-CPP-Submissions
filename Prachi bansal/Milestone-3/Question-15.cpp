#include<iostream>
using namespace std;
int main(){
	int x,prdt=1,d;
	cout<<"Enter the number: ";
	cin>>x;
	while(x!=0){
		d=x%10;
		x=x/10;
		prdt*=d;
	}
	cout<<"\nProduct is: "<<prdt;
	return 0;
}
