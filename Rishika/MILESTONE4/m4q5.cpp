//q5- wap to find the lcm of two numbers.
#include<iostream>
using namespace std;
int main()
{
   int n1,n2,m,i,lcm;
   cout<<"Enter 2 numbers= ";
   cin>>n1>>n2;
   m=max(n1,n2);
   for(i=1;i<=m;i++)
   {
   	if(m%n1==0 && m%n2==0)
   	{
   		lcm=m;
	}
   }
   cout<<"lcm is= "<<m;
   
}
