//Write a C program to print all natural numbers from 1 to n. - using while loop
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number:\n";
	cin>>n;
	cout<<endl;
	int i=1;
	while(i<=n){
		cout<<i<<"\n";
		i++;
	}
	return 0;
}
