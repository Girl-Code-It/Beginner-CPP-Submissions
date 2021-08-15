#include <stdio.h>

void main()
{
    int a[50], n, highest = 0, sec_highest = 0;
    printf("Enter the no of element : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > highest)
            sec_highest = highest, highest = a[i];

        else if (a[i] < highest && a[i] > sec_highest)
            sec_highest = a[i];
    }

    printf("Second highest element is : %d", sec_highest);
}