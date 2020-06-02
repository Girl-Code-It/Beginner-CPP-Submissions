//define function to know the nth term
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int fibonacci(int x)
{ if(x==0)
  return 0;
  else if(x==1)
  return 1;
  else
  return fibonacci(x-1)+fibonacci(x-2);
}

int main()
{   cout<<fibonacci(0)<<endl;
     cout<<fibonacci(1)<<endl;
     cout<<fibonacci(2)<<endl;
     cout<<fibonacci(3)<<endl;
     cout<<fibonacci(4)<<endl;
	getch();
	return 0;
	
}
