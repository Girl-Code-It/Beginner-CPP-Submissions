#include<iostream>
using namespace std;
int eo(int x){
	if(x%2==0){
		cout<<"\nEven";
	}else{
		cout<<"\nOdd";
	}
}
int main(){
	int a;
	cout<<"\nEnter the number: ";
	cin>>a;
	eo(a);
	return 0;
}
