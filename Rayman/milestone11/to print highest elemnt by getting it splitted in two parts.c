#include<stdio.h>
int main()
{int a[ ]={4,8,6,3,2};
int b[6];
int i;
int highest=a[0];
int secondhighest=a[0];
int j=0;
for(i=0;i<5;i++)
{if(a[i]>highest)
{highest=a[i];
j=i;}}
for(i=0;i<5;i++)
{if(a[i]<highest&& a[i]>secondhighest)
{secondhighest=a[i];}}
for(i=0;i<j;i++)
{b[i]=a[i];}
b[j]=secondhighest;
b[j+1]=highest-secondhighest;
for(i=j+2;i<6;i++)
{b[i]=a[i-1];}
for(i=0;i<6;i++)
{printf("%d",b[i],"\n");}
return 0;}
