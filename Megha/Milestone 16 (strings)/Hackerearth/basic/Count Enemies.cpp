

#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t,i,j,l,count=0,ans=1;
    cin>>t;
    for(i=0;i<t;i++){
       
    char s[1000000];  //string
    cin>>s;
    l=strlen(s);
    for(j=0;j<l;j++){
    if(s[j]=='O'){
        count++;
    if(s[j+1] == 'X'){   
        count--;
    }
    else if(s[j-1] == 'X'){   
        count--;
    }
    }
    }
    cout<<count;
    count=0;
    cout<<endl;
    }
}
