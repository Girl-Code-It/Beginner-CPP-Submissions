#include<iostream>

using namespace std;

int main()
{
        int N, Q;
        cin >> N >> Q;
        int A[N];
        for(int i=0; i<N; i++)
                cin >> A[i];

        while(Q--)
        {
                int i, X, sum=0;
                cin >> X;
                for(i=0; i<N; i++)
                {
                        sum += A[i];
                        if(sum >= X)
                                break;
                }
                cout << i+1 << endl;
        }
}
