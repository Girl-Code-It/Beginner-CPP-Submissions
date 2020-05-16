#include<iostream>
#include<math.h>
using namespace std;
int check_prime(int a)
{
	for(int j=2;j<=sqrt(a);j++)
	{
		if(a%j==0)
		return 0;
	}
	if(j==a)
	return 1;}
int main()
{
 int i, a,b, result;
 cout<<"enter upper and lower limit:"<<endl;
 cin>>a>>b;
 cout<<"all prime factors of "<<n<<"are="<<endl;
 for(i=a;i<b;i++)
 {
 	result=check_prime(i);
 	if(result==1&&(n%i)==0)
 	cout<<i<<endl;
}
}
