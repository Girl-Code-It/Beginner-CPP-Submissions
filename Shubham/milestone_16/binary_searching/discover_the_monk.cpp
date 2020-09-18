#include<stdio.h>

int bSearch(int*, int, int);
void sort (int*, int);


int main()
{       
        int N, Q;
        scanf("%d%d", &N, &Q);

        int A[N], X[Q];

        for(int i=0; i<N; i++)
                scanf("%d", &A[i]);

        sort(A, N);

        for(int i=0; i<Q; i++)
                scanf("%d", &X[i]);

        for(int i=0; i<Q; i++)
        {
                int p = bSearch(A, N, X[i]);

                if(p == -1)
                        printf("NO\n");
                else
                        printf("YES\n");
        }

}


int bSearch(int* A, int size, int x)
{
        int start=0, end = size-1, mid;

        while(start <= end)
        {
                mid = (start + end)/2;
                if(A[mid] == x) return mid;
                else if(x < A[mid])     end = mid-1;
                else start = mid+1;
        }
        return -1;
}


void sort(int* A, int size)
{
        for(int i=0; i<size; i++)
        {
                for(int j=i+1; j<size; j++)
                {
                        if(A[i] > A[j])
                        {
                                int temp = A[i];
                                A[i] = A[j];
                                A[j] = temp;
                        }
                }
        }
}
