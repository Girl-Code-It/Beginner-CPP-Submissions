//Q3- take 20 int inputs, print number of +ve,-ve,even,odd numbers etc.
#include<iostream>
using namespace std;
int main()
{
	int i,pos=0,neg=0,odd=0,ev=0,zero=0;
	int arr[20];
	for(i=0;i<20;i++)
	{
		cout<<"Enter a number = ";
		cin>>arr[i];
	}
	for(i=0;i<20;i++)
	{
		if(arr[i]>0)
		pos++;
		if(arr[i]<0)
		neg++;
		if(arr[i]%2==0)
		ev++;
		if(arr[i]%2!=0)
		odd++;
		if(arr[i]==0)
		zero++;
	}
	cout<<"Number of positive numbers are = "<<pos<<endl;
	cout<<"Number of negative numbers are = "<<neg<<endl;
	cout<<"Number of even numbers are = "<<ev<<endl;
	cout<<"Number of odd numbers are = "<<odd<<endl;
	cout<<"Number of zero's are = "<<zero;
}
