#include<iostream>
using namespace std;

int main()
{
int n, firstdigit , lastdigit,  sum;

cout<<"enter the number "<<endl;
	
cin>>n;	

lastdigit =n% 10;

firstdigit = n;
while (firstdigit>= 10)
{
 firstdigit = firstdigit/10 ;
}
cout<<"firstdigit is "	<<firstdigit<<endl;

cout<<"firstdigit is "<<lastdigit<<endl;
sum= firstdigit + lastdigit;
cout<<"sum of first and lastdigit is:"<<sum<<endl;
	
}
