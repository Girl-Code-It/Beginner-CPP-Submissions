#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--)
{
char s[5000];
cin>>s;
int k=strlen(s),a=0,b=0,c=0;
for(int i=0;i<k;i++)
{
if(s[i]=='[')      
a++;
else if(s[i]==']')   //this code means that if we find [,( or{ without getting 
a--;                //successive ],)and} so make increment of a, b and c
else if(s[i]=='{')    //so that the incomplete pairs will be deleted from the
b++;                 //total length of the string .
else if(s[i]=='}')    //but also in some case if we get the (),{},[]together 
b--;                 //in pairs then we dont have to subtract them from the 
else if(s[i]=='(')     //total. so with this funda we can find the length of 
c++;                  //the string carrying the pairs.
else if(s[i]==')')
c--;
}
cout<<k-abs(a)-abs(b)-abs(c)<<endl;//abs==absolute of a, b, c
}
return 0;
}
