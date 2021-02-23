//Write a C program to find sum of all natural numbers between 1 to n.
#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int n;
	cout<<"enter a number:\n";
	cin>>n;
	while(n>0){
		sum+=n;
		n--;
		
	}cout<<sum<<endl;
	return 0;
}
