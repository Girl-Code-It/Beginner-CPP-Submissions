#include<iostream>
#include<math.h>
using namespace std;
int power(int a, int b){
	int ans=1 ;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
}
main(){
	int a,b;
	cout<<"Enter base: ";
	cin>>a;
	cout<<"\nEnter the power: ";
	cin>>b;
	cout<<"\nAnswer: "<<power(a,b);
	
}
