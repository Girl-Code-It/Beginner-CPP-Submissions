//star 34
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,k=1,p;
   cout<<"enter the number of rows "<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)
   {  p=k;
      for(int j=1;j<=i;j++)
      {
      	cout<<p;
      	p=p-(n-i+j);
      	
      }
       k= k+ (n-i+1);
      cout<<endl;
   }
   
   getch();
   return 0;
   
}
