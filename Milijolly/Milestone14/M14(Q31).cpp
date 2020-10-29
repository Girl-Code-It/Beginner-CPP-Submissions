//Conversion 
#include<bits/stdc++.h>

using namespace std;

int main() 
{
int len,i,t;        
char str[200]; 
 cin>>t;
 cin.ignore();
 while(t--)
 {
	 cin.getline(str,200);
	 for(i=0;i<=strlen(str)-1;i++)
    {
      if(str[i]==' ')  
        {
		  cout<<"$";
        }
      if(islower(str[i]))
        {
		  cout<<int(str[i])-96;
        }
	  if(isupper(str[i]))
        {
		  cout<<int(str[i])-64;
        }
	
    }
	cout<<endl;

 }
 return 0;
}

