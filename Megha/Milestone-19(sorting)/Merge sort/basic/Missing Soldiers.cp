#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,y,z,max,min,d;
    cin>>t;
    cin>>x>>y>>z;
     max=x+z;
     min=x;
    for(; t>1; t--){
        cin>>x>>y>>z;
        if(max<(x+z))
            max=x+z;
        if(min>x)
            min=x;
     }
       d=max-min+1;
       if(d==12)
        cout<<d-1<<endl;
        else
        cout<<d<<endl;
    }
