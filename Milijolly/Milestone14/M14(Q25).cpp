//Decode
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
cin>>t;
while(t--)
{
int i,l,m,n;
char s[100000];
cin>>s;
l=strlen(s);
if(l%2==0){   
m=l/2;n=1;}      
else{
m=l/2+1;n=0;}

for(i=l-2;i>=0;i-=2)
cout<<s[i];

for(i=n;i<l;i+=2)
cout<<s[i];
cout<<endl;
}
return 0;
}
    
