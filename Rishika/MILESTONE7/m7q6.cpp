//q6- wap to convert octal into binary number system.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int oct,dec=0,temp,n,i=0,j,k=0;
	cout<<"Enter an octal number = ";
	cin>>oct;
	temp=oct;
	//octal to decimal
	while(oct!=0)
	{
		n=oct%10;
		oct=oct/10;
		dec=dec+n*pow(8,i);
		i++;
	}
	//decimal to binary
	int bin[32];
    while(dec!=0){
	bin[k]=dec%2;
	dec=dec/2;
	k++;}
	cout<<"Octal number = "<<temp<<endl;
	cout<<"Converted into binary number system = ";
	for(j=k-1;j>=0;j--)
	{
	 cout<<bin[j];
	}
    return 0;
}
