#include<stdio.h>

//Sort the array
void BubbleSort(int *a,int n)
{
    for(int i = 1; i < n; i++)
    {
        int flag = 0;//To check array is sorted or not
        for(int j = 0; j < n-i; j++)
        {
            if(a[j] > a[j+1])
            {
                //If lesser no is available then swap
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
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
    int n,m,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        //Sort the array first
        BubbleSort(a,n);

        int Max = 0,Min = 0;
        //Calculate Maximum & Minimum Sum
        for(int i=0; i<n-m; i++)
        {
            Min += a[i];
            Max += a[i+m];
        }
        // printf("%d %d\n",Max,Min);
        printf("%d\n",Max-Min);
    }
}