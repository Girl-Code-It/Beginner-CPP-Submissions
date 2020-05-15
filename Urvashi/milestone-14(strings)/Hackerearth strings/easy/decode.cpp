#include<iostream>
#include<string.h>
using namespace std;
int main()
{                        // question: convert the encrypted string into original one ;
int t;
cin>>t;
while(t--)
{
int i,l,j,m,n;
char s[100000];
cin>>s;
l=strlen(s);
if(l%2==0){   //if length of string is even.
m=0;n=1;}      
else{
m=1;n=0;}
for(i=l-2,j=0;i>=m;i-=2,j++) // then first print l-2 th letter first then decreament of 2 upto index 0.then print from 1 index with increment of 2.
{
cout<<s[i];
}
for(i=n;i<l;i+=2,j++) 
{
cout<<s[i];
}
cout<<endl;
}
}
