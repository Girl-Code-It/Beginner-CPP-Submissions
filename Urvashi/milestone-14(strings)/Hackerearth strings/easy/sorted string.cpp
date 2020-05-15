#include <stdio.h>
#include <string.h>
int main()
{                  //question : to convert the string in a sirng carrying all the letters in it in ascending order of their no .and if count of two letters is 
int t,i,j,k,l;     //equal then arrange acc to alphabetical order.
char c[100];
scanf("%d",&t);
while(t--)
{
int a[26]={0};
scanf("%s",&c);
l=strlen(c);
for(i=0;i<l;i++) 
a[c[i]-97]++;     
for(i=1;i<101;i++)
{
for(j=0;j<26;j++)
{
if(a[j]==i) 
{
while(a[j]--) 
{
printf("%c",97+j);
}
}
}
}
printf("\n");
}
return 0;
}
