#include<stdio.h>
#include<string.h>

void merge1(int l, int m, int h,int a[],int b[],char c[][11],char d[][11])
{
    int i=l, j=m+1, k=l;

    while(k<=h)
    {
        if(i<=m && j<=h)
        {
            if(a[i] <= a[j])
            {
                b[k] = a[i];
                strcpy(d[k],c[i]);
                k++;
                i++;
            }
            else
            {
                b[k] = a[j];
                strcpy(d[k],c[j]);
                k++;
                j++;
            }
        }
        else if(i>m)
        {
            b[k] = a[j];
            strcpy(d[k],c[j]);
            k++;
            j++;
        }
        else
        {
            b[k] = a[i];
            strcpy(d[k],c[i]);
            k++;
            i++;
        }
    }

    for(i=l; i<=h; i++)
    {
        a[i] = b[i];
        strcpy(c[i],d[i]);
    }
}
void MergeSort1(int l, int h,int a[],int b[],char c[][11],char d[][11])
{
    if(l<h)
    {
        int m=(l+h)/2;
        MergeSort1(l, m, a, b, c, d);
        MergeSort1(m+1, h, a, b, c, d);
        merge1(l, m, h, a, b, c, d);
    }
}
void merge(int l, int m, int h, char a[][11], char b[][11])
{
    int i=l, j=m+1, k=l;

    while(k <= h)
    {
        if(i <= m && j <= h)
        {
            if(strcmp(a[i], a[j]) <= 0)
            {
                strcpy(b[k],a[i]);
                k++;
                i++;
            }
            else
            {
                strcpy(b[k],a[j]);
                k++;
                j++;
            }
        }
        else if(i>m)
        {
            strcpy(b[k],a[j]);
            k++;
            j++;
        }
        else
        {
            strcpy(b[k],a[i]);
            k++;
            i++;
        }
    }

    for(i=l; i<=h; i++)
        strcpy(a[i],b[i]);
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
        int c[n],d[n],i,j,k,f;
        for(int i=0; i<n; i++)
            scanf("%s",&a[i]);

        MergeSort(0,n-1,a,b);

        for(i=0, k=0; i<n;)
        {
            j=i;
            f=0;
            while(strcmp(a[i], a[j])==0 && i<n)
            {
                f++;
                i++;
            }
            strcpy(b[k],a[j]);
            c[k]=f;
            k++;
        }
        
        MergeSort1(0, k-1, c, d, b, a);
        
        for(i=0; i<k; i++)
            printf("%d %s\n",c[i],a[i]);
    }
}