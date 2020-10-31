#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    int ret = (*(long long int *)a - *(long long int *)b);
    return -ret;
}

int main()
{
    int i, N;
    scanf("%d", &N);
    long long int A[N], sum = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        sum += A[i];
    }

    qsort(A, N, sizeof(long long int), cmpfunc);

    long long min = sum - A[0];
    long long max = sum - A[N - 1];
    printf("%lld %lld\n", min, max);
    return 0;
}
