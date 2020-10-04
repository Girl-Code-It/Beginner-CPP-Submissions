


#include <iostream>
#include<string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
    char s[100000];
    cin>>s;
    int ans=0;
    int num = atoi(s);
        for(int i=0;i<strlen(s);i++){
        if((s[i]=='2' && s[i+1]=='1')||(num%21==0)){
            ans=1;
        }
        }

        if(ans==1){
            cout<<"The streak is broken!"<<endl;
        }
        else{
            cout<<"The streak lives still in our heart!"<<endl;
        }
        
    }
    return 0;
}
