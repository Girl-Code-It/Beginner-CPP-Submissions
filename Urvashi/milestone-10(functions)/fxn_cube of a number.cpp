#include<iostream>
#include<math.h>
using namespace std;
int cube(int x);
int main()
{
	int x;
	cout<<"enter any number:"<<endl;
	cin>>x;
	cout<<"cube of the number is="<<cube(x)<<endl;
	return 0;
}
int cube(int a)
{ 
	return (a*a*a);
}

