#include<iostream>
using namespace std;
int main(){
	int num,reverse=0,rem;
	cout<<"Enter any number";
	cin>>num;
	while(num!=0)
{
	rem=num%10;
	reverse=reverse*10+rem;
	//to delete the last digit fron number
	num=num/10;}
	cout<<"Reversed num: "<<reverse;
}
