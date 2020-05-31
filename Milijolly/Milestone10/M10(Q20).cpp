//FUNCTION TO PRINT PRIME FACTORS

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int func(int num)
{ int i, prod=1,count;
  cout<<"prime factors of "<<num<<" is ";
  
  for(i=2;i<=num;i++)
  {
   if(num%i==0)
   { count=1;
   for(int j=2;j<i/2;j++)
    {
    if(i%j==0)
    count=0; }
    if(count==1)
    cout<<i<<" ";
	 }
  }
  
}

int main()
{   int n;
    cout<<"enter the  number "<<endl;
    cin>>n;
    func(n);
	getch();
	return 0;
	
}
