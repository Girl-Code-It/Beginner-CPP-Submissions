#include <stdio.h>

int binSrch(int *a, int t, int low, int high)
{
    if (low > high)
        return -1;

    int mid = (low+high) >> 1;
    if (a[mid] == t)
        return mid;
    else if(a[mid] > t)
        binSrch(a,t, low, mid-1);
    else    
        binSrch(a,t, mid+1, high);
}

int main()
{
    int n, t, res;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the no to search : ");
    scanf("%d", &t);

    res = binSrch(a,t, 0, n-1);

    if (res == -1)
        printf("%d is not found.\n", t);
    else
        printf("%d is found at the index %d.\n", t, res);
}