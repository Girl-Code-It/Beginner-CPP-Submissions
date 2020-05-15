#include<stdio.h>
int hack(int n)
{
	if(n==1)
	return 1;
	return(n%10==0?hack(n/10):0)||(n%20==0?hack(n/20):0);
}
int main()
{
int n,t;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
int result=hack(n);
if(result==1)
printf("Yes\n")	;
else
printf("No\n");
}
}
