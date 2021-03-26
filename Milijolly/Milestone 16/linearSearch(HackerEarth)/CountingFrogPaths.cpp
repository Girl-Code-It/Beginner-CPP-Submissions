#include <bits/stdc++.h>
using namespace std;

int main() 
{
int x,y,s,T;
   cin>>x>>y>>s>>T;
   int count = 0;
   for(int i=x;i<=x+s;i++){
       for(int j=y;j<=y+s;j++)
           if((i+j)<=T)
           count++;
       
   }
   cout<<count;
   return 0;	
}
