
#include <bits/stdc++.h>
using namespace std;
int i;
char copyString(char s1[]){ 
    static int i=0;
    if(i<strlen(s1)){
    if(isupper(s1[i])){
        return s1[i];}
        else{
            i=i+1;
            return copyString(s1);
        }
        }
    else {
    return 0;}
}
int main() {
    char s1[20],ans;
    cin>>s1;
    ans = copyString(s1);
    if(ans==0){
        cout<<"There is no capital letter in the string";
    }
    else{
        cout<<"There is first capital letter in the string that is "<<ans;
    }
}

//input meGha
//output There is first capital letter in the string that is G
