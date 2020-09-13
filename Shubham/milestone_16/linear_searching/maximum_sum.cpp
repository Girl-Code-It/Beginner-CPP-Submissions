#include<iostream>

using namespace std;

int main()
{
        int N;
        scanf("%d", &N);

        int A[N];

        for(int i=0; i<N; i++)
                scanf("%d", &A[i]);
        
        int sum=0, elem=0;
        for(int i=0; i<N; i++)
        {
                if(A[i] >= 0)
                {
                        sum += A[i];
                        elem++;
                }
        }
        
        if(sum > 0)
                printf("%d %d\n", sum, elem);

//case : all elements are 0 or negative
        else
        {
                int max=A[0];
                for(int i=0; i<N; i++)
                {
                        if(max < A[i])
                                max = A[i];
                }
                printf("%d %d\n", max, 1);
        }
}
