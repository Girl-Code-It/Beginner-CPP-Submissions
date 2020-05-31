//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


void func(int x,int y,int z)
{ if(x>y&&x>z)
  cout<<"MAX is "<<x<<endl;
  else
  {
  if(y>z)  
  cout<<"MAX is "<<y<<endl;
  else
  cout<<"MAX is "<<z<<endl;
  }
    
  if(x<y&&x<z)
  cout<<"MIN is "<<x<<endl;
  else
  {
  if(y<z)  
  cout<<"MIN is "<<y<<endl;
  else
  cout<<"MIN is "<<z<<endl;
  }
     
  
}

int main()
{   int m,n,p;
    cout<<"enter the three numbers"<<endl;
    cin>>n>>m>>p;
    func(n,m,p);
	getch();
	return 0;
	
}
