//  https://practice.geeksforgeeks.org/problems/stickler-theif/0

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int A[N];
        for(int i = 0 ; i < N ; i++){
            cin >> A[i];
        }
        int dp[N];
        dp[0] = A[0];
        dp[1] = max(A[0] , A[1]);
        int test1 , test2;
        for(int i = 2 ; i < N ; i++){
            test1 = A[i] + dp[i-2]; // A[i]is included
            test2 = dp[i-1]; //A[i] is not included
            dp[i] = max(test1 , test2);
        }
        cout << dp[N-1] << endl;
}
return 0;
}
