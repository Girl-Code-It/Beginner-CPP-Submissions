//star 23

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{ int n;
    
   cout<<"Enter the number of rows "<<endl;
   cin>>n;

  for(int i=1;i<=n;i++)
  {  
    for(int j=1;j<=i;j++)
      {  
          if(j%2==0)
          cout<<"0";
          else
          cout<<"1";
      }
      cout<<endl; 
  }
	
	getch();
	return 0;
	
	
	
	
	
}
