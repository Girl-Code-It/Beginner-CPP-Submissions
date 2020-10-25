#include <bits/stdc++.h>
using namespace std;
long largest_power(long N)
    {
        //changing all right side bits to 1.
        N = N| (N>>1);
        N = N| (N>>2);
        N = N| (N>>4);
        N = N| (N>>8);


    //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by 
                return (N+1)>>1;

    }
int main() {
    int N;
    cin>>N;
    cout<<largest_power(N);
}
