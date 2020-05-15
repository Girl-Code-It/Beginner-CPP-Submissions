#include<iostream>
using namespace std;
 int main ()
 {
 	int octalvalues[]={0,1 , 10, 11, 100, 101, 110, 111};
 	long long octal, tempoctal, binary, place;
 	int rem;
 	cout<<"enter any octal number:";
 	cin>>octal;
 	tempoctal=octal;
 	binary=0;
 	place=1;
 	while(tempoctal!=0)
 	{rem=tempoctal%10;
 	binary+=(octalvalues[rem]*place);
 	tempoctal/=10;
 	place*=1000;
	 }
	 cout<<"octal number is="<<octal<<endl;
	 cout<<"binary number is ="<<binary;
 }
