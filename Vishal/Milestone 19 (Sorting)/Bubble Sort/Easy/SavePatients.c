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
    scanf("%d",&n);

    int vaccine[n],patient[n];
    for(int i=0; i<n; i++)
        scanf("%d",&vaccine[i]);

    for(int i=0; i<n; i++)
        scanf("%d",&patient[i]);

    //Sort the array first
    BubbleSort(vaccine,n);
    BubbleSort(patient,n);

    for(int i=0; i<n; i++)
    {
        if(vaccine[i] <= patient)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}