#include<iostream>
#include<string.h>
using namespace std;
void count_consonants(char *a)
{
	static int i,count=0,vowels=0;
	if(!a[i])
	{
    cout<<count<<endl;
    return ;
	}
	else 
	{
    if((a[i]>=65&&a[i]<=90) ||(a[i]>=97&&a[i]<=122))
    {
    	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    	vowels++;
    	else 
    	count++;
	}
	i++;
	count_consonants(a);
}
}
int main()
{
	char a[100];
	cin>>a;
	count_consonants(a);
}
