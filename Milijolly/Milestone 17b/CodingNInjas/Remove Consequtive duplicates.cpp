//RemoveConsecutiveDuplicates
#include<iostream>
#include<string.h>
using namespace std;
char* removeConsecutiveDuplicates(char *s)
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
	removeConsecutiveDuplicates(s);
}
    removeConsecutiveDuplicates(s+1);
    return s;
}
int main()
{
	char s[1000];
	cin>>s;
	cout<<removeConsecutiveDuplicates(s);
}
