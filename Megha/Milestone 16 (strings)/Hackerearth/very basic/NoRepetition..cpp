

#include <iostream>
#include <string>
using namespace std;
int main() {
    int l,t,n;
    cin>>n;
    char S[80];
    // Enter the string
   for(t=0;t<n;t++){
    cin>>S; 
     
    string n=" ";
    char prevChar=' ';
    //Length of first string
    for(l=0;S[l] != 0;l++){
    if(prevChar != S[l])
    {
       n = n+S[l];
      
    }
    prevChar = S[l];
    }
    cout<<n<<endl;
   }
    return 0;
}
