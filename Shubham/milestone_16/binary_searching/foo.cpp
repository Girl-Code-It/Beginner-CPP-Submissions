#include<iostream>

using namespace std;

int main()
{
        int T;
        cin >> T;

        while(T--)
        {
                long long int A, B, C, D, K, F;

                scanf("%lld%lld%lld%lld%lld", &A, &B, &C, &D, &K);

                //calculating stress
                int time;
                for(int t=0; ; t++)
                {
                        F= A*t*t*t + B*t*t + C*t + D;
                        if(F <= K)
                                time = t;
                        else
                                break;
                }
                cout << time << endl;
        }
}
