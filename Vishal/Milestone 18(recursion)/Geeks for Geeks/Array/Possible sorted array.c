#include<stdio.h>

void printArr(int *a,int n)
{
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

    printf("\n");
}
void Generator(int *a,int *b,int *c,int i,int j,int n,int m,int len,int flag)
{
    if(flag)//Include element from a
    {
        if(len)//Print Output if at least one element from b is included
            printArr(c,len+1);

        for(int k=i; k<n; k++)
        {
            if(!len)
            {
                //First element of c is from a
                c[len] = a[k];
                Generator(a,b,c,k+1,j,n,m,len,!flag);
            }
            else
            {
                //Valid element from a
                if(a[k] > c[len])
                {
                    c[len+1] = a[k];
                    Generator(a,b,c,k+1,j,n,m,len+1,!flag);
                }
            }
        }
    }
    else//Include element from b
    {
        for(int l=j; l<m; l++)
        {
            //valid element from b
            if(b[l] > c[len])
            {
                c[len+1]  = b[l];
                Generator(a,b,c,i,j+1,n,m,len+1,!flag);
            }
        }
    }
}

int main()
{
    int n,m;
    printf("Enter the No of Element of first array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element :\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter the No of Element of second array : ");
    scanf("%d",&m);
    int b[m];
    printf("Enter the element :\n");
    for(int i=0; i<m; i++)
        scanf("%d",&b[i]);

    int c[m+n];
    Generator(a,b,c,0,0,n,m,0,1);
}