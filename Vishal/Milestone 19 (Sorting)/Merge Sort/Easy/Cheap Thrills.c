#include<stdio.h>

void swap(int *a,int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}
int partition ( int A[],int B[],int start,int end) {
    int i = start + 1;
    int piv = A[start] ;
    for(int j =start + 1; j <= end ; j++ )
    {
        if ( A[ j ] < piv)
        {
            swap (&A[ i ],&A[ j ]);
            swap (&B[ i ],&B[ j ]);
            i += 1;
        }
    }
    swap ( &A[ start ],&A[ i-1 ] ) ;
    swap ( &B[ start ],&B[ i-1 ] ) ;
    return i-1;
}
void quick_sort ( int A[ ],int b[],int start, int end )
{
    if( start < end )
    {
        int piv_pos = partition (A,b,start, end ) ;
        quick_sort (A,b,start, piv_pos -1);
        quick_sort ( A,b,piv_pos +1, end) ;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        int arr[num],a[num];
        for(int i=0; i<num; i++)
        {
            scanf("%d",&arr[i]);
            a[i]=i;
        }
        quick_sort(arr,a,0,num-1);
        int cnt=0;
        for(int i=0; i<num; i++)
        {
            if(i%2!=a[i]%2)
                cnt++;
        }
        printf("%d\n",cnt/2);
    }
}