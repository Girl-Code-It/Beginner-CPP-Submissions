//star pattern 21
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n,m,k;
    
    cout<<"Enter the number of rows "<<endl;
    cin>>n;
    m=(2*n);
    
    for(int i=1;i<=n;i++)
    {  for(int j=1;j<=m;j++)
        {
        	if(j>=n+1-i&&j<=m+1-i)
        	cout<<"*";
        	else
        	cout<<" ";
        }
    
      cout<<endl; 
    }
    
    
    getch();
    return 0;
}
