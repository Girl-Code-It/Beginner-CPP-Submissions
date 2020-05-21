#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"before swapping..."<<endl;
	cin>>x>>y;
	x=x^y;
	y=x^y;
	x=x^y;
	cout<<"after swapping..."<<endl;
	cout<<x<<" "<<y;
}
