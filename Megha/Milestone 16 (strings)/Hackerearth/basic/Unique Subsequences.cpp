


#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t,count=0;
    long long i,j,k;
    cin>>t;
    for(i=0;i<t;i++){
       int l;
       cin>>l;
    char s[1000000];  //string
    cin>>s;

    for(j=0;j<l;j++){
        if(s[j] != s[j+1]){
           count++;
        }
    }

      cout<<count;
      count=0;
    cout<<endl;
    }
    return 0;
}
