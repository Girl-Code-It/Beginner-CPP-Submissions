//star 26
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
 int n;char ch;
 cout<<"enter the number of rows"<<endl;
 cin>>n;
 
 for(int i=1;i<=n;i++)
 {  ch=64+i;
   for(int j=1;j<=i;j++)
    { cout<<ch;
      ch--;
    }
    cout<<endl;
 }
	getch();
	return 0;
}
