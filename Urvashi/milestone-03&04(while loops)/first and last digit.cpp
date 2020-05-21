#include<iostream>
using namespace std;
int main()
{
int n, firstdigit , lastdigit, digits;
cout<<"enter the number "<<endl;	
cin>>n;	
lastdigit =n% 10;
firstdigit =n;
while(firstdigit >= 10) 
{
firstdigit/=10;
}
cout<<"first digit is "	<<firstdigit<<endl;
cout<<"last digit is "<<lastdigit<<endl;
}
