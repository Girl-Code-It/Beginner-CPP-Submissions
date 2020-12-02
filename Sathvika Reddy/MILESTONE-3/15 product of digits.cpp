#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,product=1;
	cout<<"Enter any number : ";
	cin>>num;
//Repeats the step till n<=0
	while(num>0){
product=product*(num%10);
//Remove the last digit from number
num=num/10;

	}
	cout<<"product of digits"<<product;
}
