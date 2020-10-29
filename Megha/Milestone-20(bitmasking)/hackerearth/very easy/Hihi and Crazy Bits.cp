#include <iostream>
using namespace std;
int main() {
    long long int t,num,ans;    //number of test cases
    cin>>t;
    while(t--){
        cin>>num;
        long long int ans=num | num+1;
        cout<<ans<<endl;
    }
}
