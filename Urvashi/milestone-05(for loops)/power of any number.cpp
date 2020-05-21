#include<iostream>
using namespace std;
int main ()
 {
 int base, exponent , i, power=1;
 cout<<"enter base"	<<endl;
 cin >>base;
 cout<<"enter exponent"	<<endl;
 cin >>exponent;
 for(i=1; i<=exponent;i++)
 	power*=base;
 	cout<<"power of the number is "<<power;
 	return 0;
 }
