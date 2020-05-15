#include<stdio.h>
#include<string.h>

void merge(int l, int m, int h, char a[][11], char b[][11])
{
    int i=l, j=m+1, k=l;

    while(k<=h)
    {
        if(i<=m && j<=h)
        {
            if(strcmp(a[i], a[j])<=0)
            {
                strcpy(b[k], a[i]);
                k++;
                i++;
            }
            else
            {
                strcpy(b[k], a[j]);
                k++;
                j++;
            }
        }
        else if(i>m)
        {
            strcpy(b[k], a[j]);
            k++;
            j++;
        }
        else
        {
            strcpy(b[k], a[i]);
            k++;
            i++;
        }
    }
    for(i=l; i<=h; i++)
    {
        strcpy(a[i], b[i]);
    }
}

void MergeSort(int l, int h, char a[][11], char b[][11])
{
    if(l<h)
    {
        int m=(l+h)/2;
        MergeSort(l, m, a, b);
        MergeSort(m+1, h, a, b);
        merge(l, m, h, a, b);
    }
}

int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        char a[n][11],b[n][11];
        for(int i=0; i<n; i++)
            scanf("%s",&a[i]);

        MergeSort(0,n-1,a,b);
        printf("\n\n*****************\n\n");
        for(int i=0; i<n; i++)
            printf("%s\n",a[i]);
    }
}