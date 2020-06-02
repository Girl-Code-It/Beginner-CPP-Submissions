#include<stdio.h>

//count sum of bit diff of all the pair in the array
int main()
{
    unsigned int n;
    printf("Enter the size of the array : ");
    scanf("%u",&n);
    unsigned int a[n];
    printf("Enter the element : ");
    for(int i=0; i<n; i++)
        scanf("%u",&a[i]);

    int ans = 0;

    //Iterate for 32 bits
    for(int i=0; i<32; i++)
    {
        //Count the i'th bit set
        int count = 0;

        for(int j = 0; j<n; j++)
        {
            if(a[j] & (1 << i))
                count++;
        }

        ans += count*(n-count)*2;
    }

    printf("\nSum of Bits Difference : %d\n",ans);

    return 0;
}