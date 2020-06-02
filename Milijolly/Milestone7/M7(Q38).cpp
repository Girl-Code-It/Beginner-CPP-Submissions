//Write a C++ program to input binary number from user and find twos complement of the binary number

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;

int main()
{ char a[9],b[9],c[9];
  int add=1,i;

 cout<<"enter 8 bit binary string "<<endl;
 gets(a);
 cout<<"ORIGINAL number is "<<endl;
 puts(a);
 
 // finding ones complement using array b
 for(i=0;i<8;i++)
{ 
  if(a[i]=='1')
   b[i]='0';
  
  else if(a[i]=='0')
    b[i]='1'; 
} 
 b[8]='\0';
cout<<"ONES COMPLEMENT of the number is "<<endl;
puts(b);

//finding twos complement using array c
 for(int j=7;j>=0;j--)
 {
 	if(b[j]=='0'&&add==1)
 	{
 	 c[j]='1';
 	 add=0;
 	  }
 	else if(b[j]=='1'&&add==1)
   {
   	c[j]='0';
 	}
	else 
	 c[j]=b[j];	
 }
 c[8]='\0';		
 

cout<<"TWOS COMPLEMENT of the number is "<<endl;
puts(c);	
	

getch();
return 0;
	
}
