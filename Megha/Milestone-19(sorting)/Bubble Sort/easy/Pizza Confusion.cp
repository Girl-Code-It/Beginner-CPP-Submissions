#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    char brand[21],ans[21];
    int points,max=0;
    while(t--){
        cin>>brand;
        cin>>points;
        if(points>max){
            max=points;
            strcpy(ans,brand);
        }
         else if((points==max) && (strcmp(brand,ans)<0)){
            strcpy(ans,brand);
        }
    }
    cout<<ans;
}
