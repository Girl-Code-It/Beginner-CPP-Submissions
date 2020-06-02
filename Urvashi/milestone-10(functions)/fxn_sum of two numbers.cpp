#include<iostream>
using namespace std;
int sum(int x, int y)
{ 
	return(x+y);
}
int main()
{   
    int a,b;
	cout<<"enter a and b:"<<endl;
	cin>>a>>b;
	cout<<"sum of "<<a<<" and "<<b<<" is =   "<<sum(a,b);
}
