#include<stdio.h>
#include<stdlib.h>
int main() 
{
    long int N,K;
    scanf("%ld %ld", &N, &K);

    long int *a = (long int*)malloc(sizeof(long int)*N);
    long int i;
    for(i=0; i<N; i++)
        scanf("%ld", &a[i]);
    
    long int max = a[0];
    for(i=1; i<K-1 && i<N; i++) 
    {
        if(a[i]>max)
            max=a[i];
    }

    if(N==1 && (K%2)==1)
        printf("-1");
 
    else if(i<N && a[i+1]>max) 
    {
        max=a[i+1];
        printf("%ld", max);
    } 
    
    else 
      printf("%ld", max);

    free(a);
}