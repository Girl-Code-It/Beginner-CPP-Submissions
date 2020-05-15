#include<iostream>
using namespace std;

//print two numbers having odd occurances..

void print2odd(int *a,int size)
{
	int XOR2= a[0];//will hold xor of two odd occuring elements..
	int set_bit_no;//will have onlu set bit of xor2..
	int x=0,y=0;
	for(int i=1;i<size;i++)
	XOR2=XOR2^a[i];
	
	//get one set bit in the xor2 .we get rightmost set bit in the following line as it is easy to get..
	set_bit_no =XOR2& ~(XOR2-1);
	
	for(int i=0;i<size;i++)
	{
		if(a[i]& set_bit_no)
		x=x^a[i];
		else
		y=y^a[i];
	}
	cout<<"elements with odd occurances.."<<x<<" "<<y<<endl;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	print2odd(a,n);
}
