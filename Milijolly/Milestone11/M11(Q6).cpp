//Initialize and print all elements of a 2D array. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[2][2];

 cout<<"Enter 10 intergers "<<endl;
 for(int i=0;i<2;i++)	
  { for(int j=0;j<2;j++)
    cin>>a[i][j];
    cout<<endl;
     }
  
  for(int i=0;i<2;i++)	
  { for(int j=0;j<2;j++)
    cout<<a[i][j]<<"  ";
    cout<<endl;
     }
  

	getch();
	return 0;
}
