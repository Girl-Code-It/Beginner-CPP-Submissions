//Ashish and Binary Matrix
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    long n,t,m,flag=0,i,j;
	char s[1000][1000];

	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<n;i++) //entering n strings of m size 
			cin>>s[i];
		
		//checking if each row element is equal 

		    for(i=0;i<n;i++)
			    for(j=i+1;j<n;j++)
				 {   
					 if(strcmp(s[i],s[j])==0) //check if strings are equal
					    flag=1;
				 }
			 
		if(flag==1)
		 cout<<"No"<<endl; //if equal then rows will not be unique
		else
         cout<<"Yes"<<endl; //else it would be unique
		

	}
  return 0;
}

