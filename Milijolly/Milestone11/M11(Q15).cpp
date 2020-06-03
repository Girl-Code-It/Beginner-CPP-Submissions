//Initialize a 2D array of 3*3 matrix

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{  int a[3][3],count=0;
   cout<<"enter elements of 2D matrix "<<endl;

   for(int i=0;i<3;i++)
   {  for(int j=0;j<3;j++)
       {
        cin>>a[i][j];
        if(a[i][j]!=a[j][i])
        count++;
       }
           
   }
   
   if(count==0)
   cout<<"It is a symmetric matrix "<<endl;
   else
   cout<<"not symmetric "<<endl;
   
   getch();
   return 0;
   
}
