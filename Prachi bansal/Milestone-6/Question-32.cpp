#include<iostream>
using namespace std;
int main(){
	int x,sum=0;
	cout<<"Enter the number: ";
	cin>>x;
	for(int i=1;i<x;i++){
		if(x%i==0){
			sum+=i;
		}
	}
	if(x==sum){
		cout<<"\nIt is a perfect number";
	}else{
		cout<<"\nNot a perfect number";
	}
	return 0;
}
