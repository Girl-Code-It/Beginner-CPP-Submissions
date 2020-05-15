#include<iostream>
#include<math.h>
using namespace std;


int printreverse(int num)
{

int reverse=0;
int digits=(int )log10(num);
if(num==0)
return 0;
else
return (num%10 * pow(10, digits))+printreverse(num/10);

}	

int main()
{
	int num, rev;
	cout<<"enter number:";
	cin>>num;
    rev=printreverse(num);
	cout<<"reverse is"<<rev;
	return 0;
}

