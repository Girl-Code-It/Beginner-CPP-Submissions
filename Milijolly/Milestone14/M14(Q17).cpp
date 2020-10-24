//Terrible Chandu
#include <iostream>
#include<string.h>
using namespace std;

int main() {
   int t,i,j,l;
   char S[30],temp;
    cin>>t;
   while(t--)
   {   
       cin>>S;
       l=strlen(S)-1;
       for(i=0,j=l; i<=l/2;i++,j--)
       {
           temp=S[i];  //swaping elements 
           S[i]=S[j];
           S[j]=temp;
       }
      cout<<S<<endl;
   }

return 0;
}
