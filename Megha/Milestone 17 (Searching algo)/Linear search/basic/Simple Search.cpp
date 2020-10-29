


#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    int A[10005];

        for(int i=0;i<n;i++){
            cin>>A[i];
        }
            cin>>x;
    for(int i=0;i<n;i++){
        if(A[i] == x){
            cout<<i;
            break;
        }

    }
    return 0;
}
