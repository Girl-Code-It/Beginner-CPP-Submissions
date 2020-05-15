#include<iostream>
using namespace std;

int hcf(int a, int b)
{
int HCF;
if(b==0)
return a;
else
return hcf(b,a%b);

}	


int main()
{
	int num1, num2, HCF;
	cout<<"enter two numbers:";
	cin>>num1>>num2;
	HCF=hcf(num1,num2);
	cout<<"HCF of"<<num1<<"and"<<num2<<"is"<<HCF;

	return 0;
}

