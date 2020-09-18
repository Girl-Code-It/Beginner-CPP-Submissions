#include<stdio.h>

int main()
{
        int t;
        scanf("%d", &t);

        while(t--)
        {
                int A, B, C, K;
                scanf("%d%d%d%d", &A, &B, &C, &K);

                for(int x=0; ; x++)
                {
                        int p = A*x*x + B*x + C;

                        if(p >= K)
                        {
                                printf("%d\n", x);
                                break;
                        } 
                }

        }
}
