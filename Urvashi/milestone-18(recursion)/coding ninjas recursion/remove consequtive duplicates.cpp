#include<iostream>
#include<string.h>
using namespace std;
char* remove_cons_duplicates(char *s)
{

    if(s[0]=='\0')
    return s;
	int i=0;
	if(s[i]==s[i+1])
	{

	while(s[i]!='\0')
	{
	s[i]=s[i+1];
	i++;
    }
	remove_cons_duplicates(s);
}
    remove_cons_duplicates(s+1);
    return s;
}
int main()
{
	char s[1000];
	cin>>s;
	cout<<remove_cons_duplicates(s);
}
