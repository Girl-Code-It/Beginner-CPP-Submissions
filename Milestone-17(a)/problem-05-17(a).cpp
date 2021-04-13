#include<iostream>
using namespace std;
int counter=0;
int count_digits(int n)
{
	
	if(n!=0)                    //    if(n<10)
	{                           //    return 1;
		counter++;              //    else
		count_digits(n/10);     //    return 1+count_digits(n/10);
	}
	return counter;
}
int main()
{
	int n;
	cout<<"enter n - "<<endl;
	cin>>n;
	int x=count_digits(n);
	cout<<"no of digits - "<<x;
}
