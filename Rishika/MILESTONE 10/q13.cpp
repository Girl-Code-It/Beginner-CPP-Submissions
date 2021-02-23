//Q13- check whether a number is prime,armstrong or perfect by defining functions.
#include<iostream>
#include<math.h>
using namespace std;
int prime(int);
int arm(int);
int perf(int);
int main()
{
	int n;
	cout<<"Enter a number = ";
	cin>>n;
	if(prime(n))
	{
		cout<<n<<" is a prime number."<<endl;
	}else
	{
		cout<<n<<" is not a prime number."<<endl;
	}
	if(arm(n))
	{
		cout<<n<<" is an armstrong number."<<endl;
	}else
	{
		cout<<n<<" is not an armstrong number."<<endl;
	}
	if(perf(n))
	{
		cout<<n<<" is a perfect number."<<endl;
	}else
	{
		cout<<n<<" is not a perfect number.";
	}

}int prime(int num)
{
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		return 0;
		else
		return 1;
	}
}int arm(int num)
{
	int og,l,d,sum=0;
	og=num;
	d=int(log10(num)+1);
	while(num>0)
	{   l=num%10;
		sum=sum+pow(l,d);
		num=num/10;
	}
	if(sum==og)
	return 1;
	else
	return 0;
}int perf(int num)
{
	int og,sum=0;
	og==num;
	for(int i=1;i<num;i++)
	{
       if(num%i==0)
       {
       	sum=sum+i;
	   }else
	   {
	   	sum=0;
	   }
	}
	if(sum==og)
	return 1;
	else
	return 0;
}

