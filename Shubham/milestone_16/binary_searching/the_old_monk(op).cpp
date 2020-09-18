#include<stdio.h>

int M(int*, int*, int);

int main()
{
        int t;
        scanf("%d", &t);

        while(t--)
        {
                int N;
                scanf("%d", &N);
                int A[N], B[N];

                for(int i=0; i<N; i++)
                        scanf("%d", &A[i]);

                for(int i=0; i<N; i++)
                        scanf("%d", &B[i]);


                printf("%d\n", M(A, B, N));

                
        }
}

int M(int* A, int* B, int N)
{
        int x =0;
        for(int i=0; i<N; i++)
        {
                for(int j=i; j<N; j++)
                {
                        if(B[j] >= A[i])
                        {
                                if(j-i > x)
                                        x = j-i;
                        }
                }
        }
        return x;
}

