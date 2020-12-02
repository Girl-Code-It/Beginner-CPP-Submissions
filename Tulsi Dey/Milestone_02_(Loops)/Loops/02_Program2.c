/*
Write a C program to print all natural numbers in reverse (from n to 1). 
- using while loop

*/
int main()
{
    int n;
    printf("Enter a natural number:");
    scanf("%d",&n);
    int i = n;

    while(i > 0)
    {
        printf("%d ",i);
        i--;
    }
    return 0;
}