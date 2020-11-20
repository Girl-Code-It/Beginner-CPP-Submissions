#include<iostream>
using namespace std;
int main(){
long int n,sum=0,r;
cout<<"Enter any number : "	;
cin>>n;
while(n>0)
{ 
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=sum;
while(n>0)
{
r=n%10;
switch(r)
{

case 1:
cout<<"one\t"	;
break;
case 2:
cout<<"two\t";
break;
case 3:
cout<<"three\t";
break;
case 4:
cout<<"four\t";
break;
case 5:
cout<<"five\t";
break;
case 6:
cout<<"six\t";
break;
case 7:
cout<<"seven\t";
break;
case 8:
cout<<"eight\t";
break;
case 9:
cout<<"nine\t";
break;
case0: 
cout<<"zero\t";
break;
default:
cout<<"tttt";
break;

}
n=n/10;
}

	}
