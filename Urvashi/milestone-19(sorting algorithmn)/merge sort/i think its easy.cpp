#include<stdio.h>
char b[250][200];
char d[250][200];
void sort(int ,int);
void merge(int,int,int);
int main()
{
int n;
char a[2500],f;
scanf("%d",&n);
scanf("%c",&f);
while(n--)
{
gets(a);
if(n==0)
printf(" ");
int l=strlen(a);
int i,j=0,k=0;
for(i=0;i<l;i++)
{ if(a[i]!=' ')
{
b[k][j]=a[i];
j++;
}
else
{b[k][j]='\0';
k++;
j=0;
}
}
b[k][j]='\0';
sort(0,k);
for(i=0;i<=k;i++)
printf("%s ",b[i]);
printf("\n");


}
}
void sort(int p,int q)
{
int m;
if(p<q)
{
m=(p+q)/2;
sort(p,m);
sort(m+1,q);
merge(p,m,q);
}
}
void merge(int p,int m,int q)
{
int x=m+1,l=p,i=p;
for(int s=0;s<=q;s++)
{ if(l>m)
{
strcpy(d[i],b[x]);
i++;
x++;
}
else if(x>q)
{
strcpy(d[i],b[l]);
i++;
l++;
}
else if(strlen(b[l])<=strlen(b[x]))
{
strcpy(d[i],b[l]);
i++;
l++;
}
else
{
strcpy(d[i],b[x]);
i++;
x++;
}
}
for(l=p;l<i;l++)
{strcpy(b[p],d[l]);
p++;
}

}
