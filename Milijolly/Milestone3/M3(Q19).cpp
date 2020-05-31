//Write a C++ program to input a number from user and print it into words 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int num,base,n,rev=0;
 
 cout<<"enter a number "<<endl;
 cin>>n;
  num=n;
  while(num!=0)
  { 
   rev= (rev*10) + (num%10);
   num=num/10;
  }
  
  while(rev!=0)
  { base=rev%10;
    rev= rev/10;
    
    switch(base)
    { case 0: cout<<"zero "; break;
      case 1: cout<<"one "; break;
      case 2: cout<<"two "; break;		
	  case 3: cout<<"three "; break;
	  case 4: cout<<"four "; break;		
	  case 5: cout<<"five "; break;
	  case 6: cout<<"six " ; break;
	  case 7: cout<<"seven "; break;
	  case 8: cout<<"eight "; break;
	  case 9: cout<<"nine "; break;
    } }
    
   getch();
   return 0; }
