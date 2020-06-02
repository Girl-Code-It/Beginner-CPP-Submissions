//star pattern 20
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n,m,k;
    char ch;
    cout<<"Enter the number of rows "<<endl;
    cin>>n;
    m=(2*n);
    
    for(int i=1;i<=n;i++)
    {  k=1;ch='A';
	  for(int j=1;j<=m;j++)
       {    if(j>=n+1-i &&j<=n+i)
            {  
                if(j<=n)
                {
                cout<<ch;
                ch++;}
                else
               {
                cout<<k;
                k++; }
            }
            else
            cout<<" ";
       }
       cout<<endl;
    }
    
	getch();
	return 0;
		
}


