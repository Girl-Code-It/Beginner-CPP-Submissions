


#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,l,t,count=0;
    cin>>t;
  
    while(t--){
         cin>>l;
        char s[1000];
        cin>>s;
        for(i=0;i<l;i++){    //iteration for the first time when i=0
            for(j=i+1;j<l;j++){      //iteration for the second time when j=1
                if(s[i]=='1' && s[j]=='1')
                    count++;
                
            }
    }
    cout<<count;
    count=0;
     cout<<endl;
    }
    return 0;
}
