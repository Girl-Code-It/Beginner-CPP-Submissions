//Write a C++ program to print all natural numbers from 1 to n. 
#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"enter n"<<endl;
	cin>>n;
	while(n)
	{
		cout<<i<<endl;
		i++;
		n--;
	}
}
