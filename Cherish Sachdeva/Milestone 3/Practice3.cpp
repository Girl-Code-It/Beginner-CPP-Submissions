#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,newnum,fd,num,count=0,ld;
    cin>>n;
    num=n;
    ld=n%10;
    while(n>=10){
        n/=10;
        count++;
    }
    fd=n;
    newnum=(ld*pow(10,count)+fd)+(num-fd*pow(10,count)-ld);
    cout<<newnum<<endl;
    return 0;

}