#include<iostream>
#include<math.h>
using namespace std;
int checkprime(int num)	
{ 
for(int i=2;i<sqrt(num);i++)
{
if((num%i)==0)
return 1;
}
}
int main()
{
	int num;
	cout<<"enter any number:"<<endl;
	cin>>num;
	(checkprime(num)==1)?cout<<"composite":cout<<"prime";
}
