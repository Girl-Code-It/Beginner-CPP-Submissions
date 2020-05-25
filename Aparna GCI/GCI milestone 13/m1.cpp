#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	int i,j,f;
	f=0;
	cout<<"Enter string 1 and 2 : "<<endl;
	gets(a);
	gets(b);
	if(strlen(a)==strlen(b))
	{
	    for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
        if(a[i]>b[j])
        {
            f=1;
        }
        else
	    {
	        f=0;
	    }
    }
	else
	f=0;
	if(f==1)
        puts("NO");
    else
        puts("YES");
	return 0;
}
