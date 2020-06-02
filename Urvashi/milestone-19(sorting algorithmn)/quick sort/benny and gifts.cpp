#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct MAP{int x;int y;};
 
int compare(const void*a,const void*b)
{
    struct MAP A =*(struct MAP*)a;
	struct MAP B =*(struct MAP*)b;
	if(A.x>B.x)
	return 1;
	else
	if(A.y>B.y && A.x==B.x)
	return 1;
	return 0;
	
}
int main( )
{
	char s[100000];
	MAP direction[100000];

	cin>>s;
	direction[0].x=0;
	direction[0].y=0;
	int x=0,y=0;
	int k=1;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='R')
		y+=1;
		else if(s[i]=='L')
		y-=1;
		else if(s[i]=='U')
		x-=1;
		else if(s[i]=='D')
		x+=1;
        direction[k].x=x;
        direction[k].y=y;
        k++;
	}
	qsort(direction,k,sizeof(struct MAP),compare);
	int count=0;
	for(int i=0;i<k-1;i++)
	{
		if(direction[i].x==direction[i+1].x&&direction[i].y==direction[i+1].y)
		count++;
	}
	cout<<count<<endl;
}
