#include<stdio.h>

int main ()
{
    int N,M;
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N; i++)
        scanf("%d",&A[i]);
    
    scanf("%d",&M);
    int C[M];
    for(int i=0; i<M; i++)
        scanf("%d",&C[i]);
        
    for(int i=0; i<100; i++)
    {
       int w = 0;
        for(int j=0; j<N; j++)
        {
            for(int k=0; k<M; k++)
            {
                if(i + A[j] == C[k])
                {
                    w++;
                    break;
                }
            }
        }
        if(w == N)
        printf("%d ",i);
    }
}