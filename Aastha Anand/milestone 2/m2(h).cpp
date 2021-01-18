//Write a C program to find sum of all odd numbers between 1 to n.
#include<iostream>
using namespace std;
int main(){
	int n,s=0;
	cout<<"enter a positive integer:\n";
	cin>>n;
	for(int i=1;i<=n;i++){
		s+=i;
		i++;
	}
	cout<<"sum is:\n"<<s;
	return 0;
}
