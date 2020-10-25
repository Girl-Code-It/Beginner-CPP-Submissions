//Print first occurence 
#include <iostream> 
#include<string.h>

using namespace std;

int main() {
char s[200];      
int t;
cin>>t;
while(t--)
{
cin>>s;
for(int i=0;s[i]!='\0';i++)	
{   
	int k=0;
	while(s[k]!=s[i])     
	{
		k++;
	}
	if(k==i)             
	cout<<s[i];          
}
cout<<endl;
}

    return 0;	
}

