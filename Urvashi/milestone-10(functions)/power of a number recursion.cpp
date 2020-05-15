#include<iostream>
using namespace std;
int power(int x , int y);
int main()
{int x, y;
cout<<"enter x and y:"<<endl;
cin>>x>>y;
cout<<"power is"<<power(x,y)<<endl;
}
int power (int a, int b)
{ 
	if(b==1)
	return a;
	return (a*power(a, b-1));
}
