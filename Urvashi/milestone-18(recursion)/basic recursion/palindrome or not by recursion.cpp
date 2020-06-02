#include<iostream>
#include<string.h>
using namespace std;
void check_palindrome(char *a)
{
	static int flag=1,i=0;
	if(i==strlen(a))
	{
	cout<<"palindrome\n";
	return ;
}
	if(a[i]!=a[strlen(a)-1-i])
	{
		cout<<"not palindrome\n";
		return ;
	}
	else
	{
		i++;
		check_palindrome(a);
	}
}
int main()
{
char a[200];
cin>>a;
if(a[0]=='-')
{
 int i;
 for(i=0;a[i+1]!='\0';i++)
  a[i]=a[i+1];
  a[i]='\0';
}
check_palindrome(a);	
}
