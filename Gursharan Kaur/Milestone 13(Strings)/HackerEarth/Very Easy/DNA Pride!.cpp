#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 
	int i,j;
  	long long t;
  	char s[1000000];
  	cin>>t;
  	for(i=0;i<t;i++)
  	{ 
		int n,x=0;
		cin>>n;
    		cin>>s;
	        for (j = 0; j < n; j++)
		{	
			if (s[j]!='A' && s[j]!='T' && s[j]!='C' && s[j]!='G' ) 
			x = 1;
		}
	        if (x == 1)		   
			cout << "Error RNA nucleobases found!" << endl;
		else 
		{	
			for (j = 0; j < n; j++)
			{	
				if (s[j] == 'A')
				cout << "T";
				else if (s[j] == 'T')
				cout << "A";
				else if (s[j] == 'C')
				cout << "G";
				else if (s[j] == 'G')
				cout << "C";
			}
		}
  		cout<<endl;
  	}
  	return 0;
}