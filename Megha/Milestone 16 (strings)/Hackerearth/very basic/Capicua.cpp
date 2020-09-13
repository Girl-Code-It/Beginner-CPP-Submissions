

#include <iostream>
using namespace std;
int main() {
    int t,l,i,n;
    cin>>n;
    char S[80];
    for(t=0;t<n;t++){
    
    cin>>S;
    
    for(l=0; S[l] != '\0'; l++);
    
    for(i=0;(i<l/2) && (S[i] == S[l-i-1]);i++);
    if(i==l/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    }  
    return 0;
}
