#include<iostream>
using namespace std;
int main(){
	int n,rem,rem1;
	cout<<"Finding the sum of first and last digit numbers\n";
	cout<<"Enter any number\n";
	cin>>n;
	rem=n%10;//rem for reminder
	while(n>=10){
		n=n/10;//to go to last digit of number 
	}
	rem1=n%10;

	cout<<"sum = "<<rem+rem1<<endl;
}
