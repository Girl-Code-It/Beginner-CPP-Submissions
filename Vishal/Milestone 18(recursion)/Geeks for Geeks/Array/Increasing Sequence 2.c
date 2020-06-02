#include<stdio.h>

void Print(int *arr,int k)
{
    for(int i=0;i<k;i++)
       printf("%d ",arr[i]);
    
   printf("\n");
}

void increaseSeq(int n,int k,int index,int *arr)
{
    if(index == k)
    {
       Print(arr,k);
       return;
    }
    
    int i = (index == 0) ? 1 : (arr[index-1] + 1);
    
    while(i <= n)
    {
       arr[index] = i;
       increaseSeq(n,k,index+1,arr);
       i++;
    }

}
int main()
{
  int n,k;
  printf("Enter the natural no : ");
  scanf("%d",&n);
  printf("Enter the order : ");
  scanf("%d",&k);

  int arr[k];
  increaseSeq(n,k,0,arr);
  return 0;
}