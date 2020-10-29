#include<stdio.h>
#include<conio.h>
int main()
{int a[3][3];
int b[3][3];
int i,j,sym;
printf("enter elements");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{scanf("%d",&a[i][j]);}}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{b[i][j]=a[j][i];}}
sym=1;
for(i=0;i<3 && sym;i++)
{for(j=0;j<3;j++)
{if(a[i][j]!=b[i][j])
    {sym=0;
    break;}}}
if(sym==1)
{printf("the given matrix is symmetric");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("%d",a[i][j]);}
printf("\n");}}
else
{printf("the matrix is not symmetric");}
return 0;
}
