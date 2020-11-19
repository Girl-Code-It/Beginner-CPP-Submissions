//Write a C program to print all even numbers between 1 to 100. - using while loop
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	while(i!=100)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
		}
		i++;
	}
}
