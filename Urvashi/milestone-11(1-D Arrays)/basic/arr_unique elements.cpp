#include<stdio.h>
int main ()
{
    int n,a[50],count,freq[50];
    printf("Enter the no of element : ");
    scanf("%d",&n);
    
    printf("input the integer \n");
    for(int i=0; i<n; i++)
   {
	scanf("%d",&a[i]);
	freq[i]=-1;}
	printf("unique elements are=\n");
    for(int i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]==a[i])
            {
                count++;
                freq[j]=0;
            }
        }
		if(freq[i]!=0)
		freq[i]=count;
    }
    for(int j=0;j<n;j++)
    {
    	if(freq[j]==1)
    	printf("%d\n",a[j]);
	}
    return 0;
}
