#include<iostream>
using namespace std;
int main()
{
	int a,amt,discount;
	cout<<"enter the number of item purchases"<<endl;
	cin>>a;
	if(a>10)
	{
		cout<<"your purchase will have dicount of 10%"<<endl;
		amt=(a*100)-(a*100)/10;
		cout<<"price after discount "<<amt;
	}
	else
	cout<<" total price is "<<a*100;
	return 0;
 } 
