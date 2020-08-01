#include <iostream>
using namespace std;
int main() {
    int t,l,i,n,p=0;
    cin>>n;
    char S[80];
    for(t=0;t<n;t++){
    
    cin>>S;
    
    for(l=0; S[l] != '\0'; l++){
    
    for(i=l+1;S[i] != '\0'; i++){
    if(S[i]-S[l] == 1 || S[l]-S[i] == 1){
        p=1;
    }
    else{
        p=0;
    }
    }
    }
    if(p == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
