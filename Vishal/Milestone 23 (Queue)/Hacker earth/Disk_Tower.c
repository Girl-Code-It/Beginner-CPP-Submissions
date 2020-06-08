#include<stdio.h>

int main()
{
    int N, temp[1000002] = {0};
    scanf("%d", &N);

    int z,max = N, t_size = N;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &z);
        temp[z] = z;

        if(z == max)
        {
            while(temp[t_size])
            {
                printf("%d ", t_size);
                t_size--;
            }

            max = t_size;
            printf("\n");
        }
        else
            printf("\n");
    }
    return 0;
}