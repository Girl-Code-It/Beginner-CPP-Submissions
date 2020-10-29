#include<iostream>
using namespace std;

int factorial(int x){
	int fact=1;
	if(x!=0)
	{
		for(int i=1;i<=x;i++)
		{
		  fact=fact*i;
		}	
		return fact;
	}
	else if(x==0)
	  return 0;
}

int main(){
	int fact,num;
	cout<<"\n Enter the number:";
	cin>>num;
	cout<<"\n Factorial of number is "<<factorial(num);
	return 0;
}
