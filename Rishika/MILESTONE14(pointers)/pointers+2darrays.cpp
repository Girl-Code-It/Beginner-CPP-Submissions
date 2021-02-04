//pointers and 2d arrays
#include<iostream>
using namespace std;
int main()
{
	int b[2][3];
	int(*p)[3]=b;
	cout<<b<<endl;
	cout<<b+1<<endl;
	cout<<*(b+1)<<endl;
	cout<<*(b+1)+1<<endl;
	cout<<*(b+1)+2<<endl;
	cout<<*b+2;
}
