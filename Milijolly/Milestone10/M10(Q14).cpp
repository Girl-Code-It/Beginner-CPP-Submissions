//Write a C++ program to check whether a number is prime, Armstrong or perfect number using functions.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>

using namespace std;

void prime(int x)
{ int count=0;
  for(int i=2;i<=x/2;i++)
   {
     if(x%i==0)
     count++;   }
    if(count==0)
    cout<<"It is PRIME"<<endl;
    else
    cout<<"It is NON-PRIME"<<endl;
      
}


void armstrong(int x)
{ int lastDigit, sum, temp, digits=0;
    sum = 0;
    temp = x;
    
    while(temp>0)
    { temp=temp/10;
      digits++;
    }
   temp=x;

    while(temp> 0)
    {
        lastDigit = temp % 10;
        sum = sum + pow(lastDigit, digits);
        temp= temp / 10;
    }
    
    if(x==sum)
    cout<<"It is ARMSTRONG NUMBER"<<endl;
    else
    cout<<"It is not an ARMSTRONG NUMBER"<<endl;
}

void perfect(int x)
{ int sum=0;
  
  for(int i=1;i<x;i++)
   {  if(x%i==0)
     sum=sum+i; }
  
   if(x==sum)
    cout<<"It is PERFECT NUMBER"<<endl;
    else
    cout<<"It is not a PERFECT NUMBER"<<endl;  
    
}




int main()
{   int n ;
    cout<<"enter the number"<<endl;
    cin>>n;
    prime(n); 
    armstrong(n); 
	perfect(n); 
    
	getch();
	return 0;
	
}
