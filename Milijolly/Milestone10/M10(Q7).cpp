//Define a function to find out if number is prime or not. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int func(int x)
{ int count=0;
  for(int i=2;i<=x/2;i++)
   {
     if(x%i==0)
     count++;   }
   return count;  
}

int main()
{   int n,m;
    cout<<"enter the  number "<<endl;
    cin>>n;
    m=func(n);
    if(m==0)
    cout<<"It is PRIME"<<endl;
    else
    cout<<"It is NON-PRIME"<<endl;
    
	getch();
	return 0;
	
}
