//program to print even or odd numbers in given range using recursion

#include <bits/stdc++.h>
using namespace std;

void print(int r,int n)
{
	if(r>n) 
     {
     	return;
		}   
     
	cout<<r<<" ";   
	return print(r+2,n);
}

int main()
{
	int n;
	cin>>n;
	//odd numbers
	 print(1,n);
	 
	 cout<<endl;
	 
	 //even numbers
	 print(2,n);
	 
}
