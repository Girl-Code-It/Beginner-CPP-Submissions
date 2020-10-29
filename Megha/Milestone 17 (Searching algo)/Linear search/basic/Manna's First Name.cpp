

#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
    char s[100000];
    cin>>s;

     int suvo=0,suvojit=0;       
    for(int i=0;i<strlen(s);i++){
        if(s[i] == 'S' && s[i+1] == 'U' && s[i+2] == 'V' && s[i+3] == 'O' && s[i+4] == 'J' && s[i+5] == 'I' && s[i+6] == 'T'){
            suvojit++;
        }
        else if(s[i] == 'S' && s[i+1] == 'U' && s[i+2] == 'V' && s[i+3] == 'O'){
            suvo++;
        }
    }
    cout<<"SUVO = "<<suvo<<", SUVOJIT = "<<suvojit<<endl;
    }
}
