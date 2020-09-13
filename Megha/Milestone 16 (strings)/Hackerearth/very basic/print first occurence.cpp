

#include <iostream>
#include <string>
using namespace std;
int main() {
    int l,t,n;
    cin>>n;
    char S[250];
    // Enter the string
   for(t=0;t<n;t++){
    cin>>S; 
    //Length of first string
    for(l=0;S[l] != 0;l++){
        int k=0;
    while(S[k] != S[l])
    {
       k++;
      
    }
    if(l==k){ 
    cout<<S[l];
    }
    
    }
cout<<endl;
   }
    return 0;
}
