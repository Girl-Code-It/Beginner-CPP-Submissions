//power function
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int power(int a,int b)
{ if(b==1)
  return a;
  else
  return a*power(a,b-1);
}

int main()
{   int m,n;
    cout<<"enter the two numbers"<<endl;
    cin>>n>>m;
    cout<<power(n,m);
	getch();
	return 0;
	
}
