#include<stdio.h>
void BubbleSort(int *G,int n)
{
    for(int i = 1; i < n; i++)
    {
        int flag = 0;//To check array is sorted or not
        for(int j = 0; j < n-i; j++)
        {
            if(G[j] > G[j+1])
            {
                //If lesser no is available then swap
                int temp = G[j];
                G[j] = G[j+1];
                G[j+1] = temp;
                //Change flag to show change
                flag = 1;
            }
        }
        //If array is sorted then break
        if(flag == 0)
            break;
    }

}
int main()
{
    int n,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int B[n],G[n],count = 0;
        for(int i=0; i<n; i++)
            scanf("%d",&G[i]);

        for(int i=0; i<n; i++)
            scanf("%d",&B[i]);

        BubbleSort(G,n);
        BubbleSort(B,n);
        for(int i=0; i<n; i++)
        {
            if(B[n-1-i]%G[i] == 0 || G[i]%B[n-1-i] == 0)
                count++;
        }
        printf("%d\n",count);
    }
}