

#include <iostream>
#include <string>
using namespace std;
int main() {
    int l,t,n,p;
    cin>>n;
    cin.get();
    char S[150];
    // Enter the string
   for(t=0;t<n;t++){
    cin.getline(S,150);
    //Length of first string 
    for(l=0;S[l] != 0;l++){
    // for lower case letters 
    if(S[l] >= 'a' && S[l]<='z')
    {
       cout<<S[l]-96;
    }
    // for upper case letters 
    else if(S[l] >= 'A' && S[l]<='Z')
    {
       cout<<S[l]-64;
    }
    else{ 
    cout<<"$";
       } 
    }

   }
    return 0;
}
