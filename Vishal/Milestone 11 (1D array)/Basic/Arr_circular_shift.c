#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k;
    printf("Enter the no of element : ");
    scanf("%d", &n);
    
    int *a = (int*)malloc(n*sizeof(int));

    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter a number (to shift the position) : ");
    scanf("%d", &k);
    k = k%n;

    for (int i = 0; i < k; i++){
        int last = a[n-1];
        for (int j = n-1; j > 0; j--)
            a[j] = a[j-1];
        a[0] = last;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    free(a);
    return 0;
}