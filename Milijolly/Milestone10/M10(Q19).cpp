//print multiplication table of 15
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int table(int x,int y=10)
{ 
   if(y!=1)
   table(x,y-1);

   cout<<x<<"*"<<y<<"="<<x*y<<endl;


}

int main()
{   int m,n;
    cout<<"enter the  numbers"<<endl;
    cin>>n>>m;
    table(n,m);
	getch();
	return 0;
	
}
