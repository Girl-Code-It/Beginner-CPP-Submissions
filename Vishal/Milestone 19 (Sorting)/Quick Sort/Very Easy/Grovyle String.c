#include<stdio.h>

void Swap(char *x,char *y)
{
    char z = *x;
    *x = *y;
    *y = z;
}

int Partition(char *a,int str,int end)
{
    char pivot = a[end];
    int pIndex = str ;

    for(int i=str; i<end; i++)
    {
        if(a[i] >= pivot)
        {
            Swap(&a[i],&a[pIndex]);
            pIndex++;
        }
    }
    Swap(&a[pIndex],&a[end]);
    return pIndex;
}

void QuickSort(char *a,int str,int end)
{
    if(str < end)
    {
        int pivot = Partition(a,str,end);

        QuickSort(a,str,pivot-1);
        QuickSort(a,pivot+1,end);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char a[1001];
        scanf("%s",a);

        int len = strlen(a);
        QuickSort(a,0,len-1);
       
        char Result[len];
        int mid = len/2;
        int low = mid - 1,high = mid + 1;
        int ptr = 0;
        Result[mid] = a[ptr++];
        while(high < len && low >= 0)
        {
           Result[high++] = a[ptr++];
           Result[low--] = a[ptr++];
        }
        Result[ptr] = '\0';
        printf("%s\n",Result);
       
    }
    return 0;
}