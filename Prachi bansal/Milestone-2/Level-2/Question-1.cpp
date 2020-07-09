#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the year: ";
	cin>>x;
	if(x%400==0){
		cout<<"\nIt is a leap year";
	}else{
		if(x%4==0 && x%100!=0){
			cout<<"\nIt is a leap year";
		}else{
			cout<<"\nIt is not  a leap year";
		}
	}
	return 0;
}
