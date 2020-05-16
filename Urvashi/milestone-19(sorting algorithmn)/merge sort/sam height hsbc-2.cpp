#include<bits/stdc++.h>
 
using namespace std;
int main(){
    
    std::cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,sh;
        cin>>n>>sh;
        int l=0,r=0;
        for(int i = 0 ; i<n; i++ ){
            int f;
            cin>>f;
            if(f>sh)
			r++;
            else 
			l++;
        }
        printf("%d\n",abs(r-l));
    }
}
