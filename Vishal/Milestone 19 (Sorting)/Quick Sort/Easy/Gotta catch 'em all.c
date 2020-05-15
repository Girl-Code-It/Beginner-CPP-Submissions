#include<stdio.h>
int main()
{
    int T,N,largest,second_smallest,smallest,i,l_ind,s_ind,second_largest;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int a[N];
        l_ind=0,s_ind=0;
        largest=-1;
        second_smallest=1000000001;
        smallest=1000000001;
        second_largest=-1;
        for(i=0;i<N;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>largest)
            {
                second_largest=largest;
                largest=a[i];
                l_ind=i;
            }
            else if(a[i]==largest||a[i]>second_largest)
            {
                second_largest=a[i];
            }
            if(a[i]<smallest)
            {
                second_smallest=smallest;
                smallest=a[i];
                s_ind=i;
            }
            else if(a[i]==smallest||a[i]<second_smallest)
            {
                second_smallest=a[i];
            }
        }
        if(l_ind==0&&s_ind==N-1&&N!=2)
        {
            if(largest-second_smallest>second_largest-smallest)
                printf("%d\n",largest-second_smallest);
            else
                printf("%d\n",second_largest-smallest);
        }
        else
            printf("%d\n",largest-smallest);
    }
    return 0;
}