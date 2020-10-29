//Remove Duplicates

#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char S[100000];
    long i,j;
	cin>>S;
	for(i=0;S[i]!='\0';i++)	
	{   
	  int k=0;
	  while(S[k]!=S[i])     
    	{  k++;
	    }
	 
	  if(k==i)
	  cout<<S[i]; 

	}

  return 0;
}

