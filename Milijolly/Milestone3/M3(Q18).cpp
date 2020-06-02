//Write a C++ program to count frequency of digits in a given number

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int num,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,base;
   
  cout<<"enter the number "<<endl;
  cin>>num;
  
  while(num!=0)
  { base=num%10;
    num= num/10;
    
    switch(base)
    { case 0: c0++; break;
      case 1: c1++; break;
      case 2: c2++; break;		
	  case 7: c7++; break;
	  case 3: c3++; break;		
	  case 4: c4++; break;
	  case 5: c5++; break;
	  case 6: c6++; break;
	  case 8: c8++; break;
	  case 9: c9++; break;
    } }
    cout<<"frequency of "<<endl;
    cout<<"0 is "<<c0<<endl;
    cout<<"1 is "<<c1<<endl;
    cout<<"2 is "<<c2<<endl;
    cout<<"3 is "<<c3<<endl;
    cout<<"4 is "<<c4<<endl;
    cout<<"5 is "<<c5<<endl;
    cout<<"6 is "<<c6<<endl;
    cout<<"7 is "<<c7<<endl;
    cout<<"8 is "<<c8<<endl;
    cout<<"9 is "<<c9<<endl;
  
  getch();
   return 0;	
  }
  
 

