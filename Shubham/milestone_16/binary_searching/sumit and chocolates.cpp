#include<iostream>

using namespace std;

int main()
{
        int N, Q;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++)
                cin >> A[i];

        int sum[N];
        sum[0] = A[0];

        for(int i=1; i<N; i++)
                sum[i] = A[i] + sum[i-1];

        cin >> Q;

        while(Q--)
        {
                int query;
                cin >> query;

                //binary search

                int low=0, high=N-1, mid, ans;

                while(low <= high)
                {
                        mid = (low+high)/2;

                        if(sum[mid] >= query && sum[mid-1] < query)
                                break;
                        
                        else if(sum[mid] < query)
                                low = mid+1;
                        
                        else    high =mid-1;
                }
                cout << mid+1 <<endl;

        }
}
