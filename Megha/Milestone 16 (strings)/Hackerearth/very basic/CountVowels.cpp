


#include <iostream>
using namespace std;
int main() {
    int i,l,n,count=0;
    cin>>n;
    char S[80];
    for(i=0;i<n;i++){
    
    // Enter the string
    cin>>S;
    
    //Length of first string
    for(l=0;S[l] != '\0';l++){
    if(S[l]=='a' || S[l]=='e' || S[l]=='i' || S[l]=='o'|| S[l]=='u')
        count++;
    }

    cout<<count;
    count=0;
    cout<<endl;
    }
    
}
