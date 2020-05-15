#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long octal , tempoctal, decimal=0;
	int rem , place=0;
	cout<<"enter the octal number:";
	cin>>octal;
	tempoctal=octal;
	while(tempoctal!=0)
	{
	rem = tempoctal%10;
	decimal+= pow(8, place)*rem;
   	tempoctal/=10;
   	place++;
    } 
	place*=1000;
	cout<<"octal number is="<<octal<<endl;
	cout<<"decimal number is ="<<decimal;
}

