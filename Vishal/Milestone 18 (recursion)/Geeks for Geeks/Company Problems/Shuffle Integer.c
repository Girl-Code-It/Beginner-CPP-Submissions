void Shuffle(int *a,int n,int i)
{
    
    if(i == n/2 && n%2 == 0)
    return;
    if(i == (n-1)/2 && n%2 == 1)
    {
    printf("%d ",a[n-1]);
    return;
    }
    
    printf("%d ",a[i]);
    
    if(n%2 == 0)
    printf("%d ",a[n/2+i]);
    else
    printf("%d ",a[(n-1)/2+i]);

    Shuffle(a,n,i+1);
}
