#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,freq[10],rem;
    cin>>n;
    for(i=0;i<=9;i++){
        freq[i]=0;
    }
    while(n!=0){
        rem=n%10;
        n/=10;
        freq[rem]++;
    }
    for(int j=0;j<10;j++){
        cout<<"Frequency of "<<j<<" is "<<freq[j]<<endl; 
    }
    return 0;
}
