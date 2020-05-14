#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Merge(int *a,int *b,int *c,int n,int m)
{
    int i=0,j=0,k=0;
    while(i < n && j < m)
    {
        if(a[i] >= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }
    //if there is no remaining element in b
    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    //if there is no remaining element in a
    while(j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main()
{
    int n,t,m;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        int *c = (int*)malloc((n+m)*sizeof(int));
        int *a = (int*)malloc(n*sizeof(int));
        int *b = (int*)malloc(m*sizeof(int));
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        for(int i=0; i<m; i++)
            scanf("%d",&b[i]);

        Merge(a,b,c,n,m);
        for(int i=0; i<n+m; i++)
            printf("%d ",c[i]);
        printf("\n");
        free(a);
        free(b);
        free(c);
    }
    return 0;
}