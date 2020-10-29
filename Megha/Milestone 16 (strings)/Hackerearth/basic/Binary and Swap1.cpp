


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
char a[100001];
char b[100001];
cin>>a;
cin>>b;
int count=0;
for(int i=0;i<strlen(a);i++){
if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1') ){   //as the string is in binary form so there will be only two no. either 1 or 0
    count++;
}
}
if(count%2==0){              //this is because when we do swapping we change two no.s so it can never be odd
  
    cout<<count/2;            //this is because when we do swapping we change two no.s but swaping is done only once so divided by 2
}
else{
    cout<<-1;
}
}
