#include<iostream>
using namespace std;
int main(){
	int x,d,n,r=0;
	cout<<"Enter the number: ";
	cin>>x;
	n=x;
	
	while(n!=0){
		d=n%10;
		n=n/10;
		r=r*10;
		r+=d;
	}
	if(r==x){
		cout<<"\nYes it as a pallindrome.";
	}else{
		cout<<"\nIt is not a pallindrome.";
	}
	
	return 0;
}
