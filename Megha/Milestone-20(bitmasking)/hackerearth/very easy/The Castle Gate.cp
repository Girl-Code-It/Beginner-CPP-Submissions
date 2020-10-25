#include <iostream>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if((i^j)<=n){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
