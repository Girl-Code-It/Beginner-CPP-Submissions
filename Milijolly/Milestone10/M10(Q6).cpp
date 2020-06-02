//A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int func(int x)
{ 
  if(x>18)
  return 0;
  
}

int main()
{   int n,m=1;
    cout<<"Enter the age"<<endl;
    cin>>n;
    cout<<"The person is  ";
    m=func(n);
    if(m==0)
    cout<<"Eligible to VOTE";
    else
    cout<<"NOT Eligible to VOTE";
	getch();
	return 0;
	
}
