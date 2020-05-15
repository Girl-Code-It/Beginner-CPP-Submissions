#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{                    //question: to convert first letter of every word present in the string into uppercase letter.
  char s[30000];
  	gets(s);
  	for(int i=0;i<strlen(s);i++) //traversing string.
  	{
  	if(s[i]==' '&&islower(s[i+1])) //if we get space in the string and very next we are getting a lowercase letter then convert it into uppercase letter.
	s[i+1]=toupper(s[i+1]);	
	if(islower(s[0]))              // convert the first letter of th string into uppercase.
	s[0]=toupper(s[0]);
  }
  puts(s);
}
