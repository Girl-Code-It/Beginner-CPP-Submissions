#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0 ||n==1)
	return n;
	else 
    return fib(n-1)+fib(n-2);
}
    int main()
{
	int num,i=0,c;
	cin>>num;
   for(int c=0;c<num;c++)
   {
   	cout<<fib(i)<<" ";
   	i++;
   }
}
