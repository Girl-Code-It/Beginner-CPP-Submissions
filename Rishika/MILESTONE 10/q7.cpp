//II-Q7-wap to print the maximum and minimum of two numbers using two functions
#include<iostream>
using namespace std;
int max(int,int);
int min(int,int);
int main()
{
	int a,b;
	cout<<"Enter two umbers to be compared = ";
	cin>>a>>b;
	cout<<"Maximum = "<< max(a,b)<<endl;
	cout<<"Minimum = "<<min(a,b);
}int max(int x,int y)
{
	return((x>y)?x:y);
}int min(int x, int y)
{
	return((x<y)?x:y);
}
