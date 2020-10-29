#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s[30001];
    cin.getline(s,1000001);
    if(s[0]>='a' && s[0<='z']){
        s[0]-=32;
    }
    for(int l=0;s[l]!=0;l++){
          if(s[l] == ' '){
              s[l+1] =toupper(s[l+1]);
              
          }
          cout<<s[l];
    }
 
    return 0;
}
