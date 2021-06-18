//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number:\n";
	cin>>n;
	cout<<endl;
	int i=n;
	while(i>0){
		cout<<i<<"\n";
		i--;
	}
	return 0;
}
