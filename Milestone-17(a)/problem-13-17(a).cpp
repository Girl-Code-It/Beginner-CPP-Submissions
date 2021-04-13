#include<iostream>
using namespace std;
void print(int val,int n)
{
if(val>n)
{
	return;
}
cout<<val<<" ";
print(val+2,n);	
}
int main()
{
	int n;
	cout<<"enter n -"<<endl;
	cin>>n;
	cout<<"printing even numbers- ";
	print(2,n);
	cout<<endl;
	cout<<"printing odd numbers - ";
	print(1,n);
}
