#include <stdio.h>
#include <malloc.h>
long int c = 0, max = 0;

long int maxForest(int i, int j,int n, char ar[][n]) {

    if(i<0 || j<0 || i>=n || j>=n || ar[i][j] == 'W')
        return 0;

    ar[i][j] = 'W';
    return 1+maxForest(i,j-1,n,ar)+maxForest(i-1,j,n,ar)+maxForest(i+1,j,n,ar)+maxForest(i,j+1,n,ar);
}

int main()
{
    int n;
    scanf("%d", &n);
    char ar[n][n];
    for(int i=0; i<n; i++)
        scanf("%s",ar[i]);

    for(int i=0; i<n; i++)
    {   for(int j=0; j<n; j++)
        {
            if(ar[i][j] == 'T')
            {
                c = maxForest(i,j,n,ar);
                if(c>max)
                    max = c;

            }
        }
    }
    printf("%d",max);
    return 0;
}