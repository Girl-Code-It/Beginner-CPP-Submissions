

#include <iostream>
#include <string>
using namespace std;
int main() {
    char s[10000000];
    cin>>s;
    
    for(int l=0;s[l] != 0;l++){
        int k=0;
        while(s[l]!=s[k]){
            k++;
        }
        if(k==l){
            cout<<s[k];
        }
    }
    cout<<endl;
    
    return 0;
}
