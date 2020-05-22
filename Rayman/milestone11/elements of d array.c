#include<stdio.h>
#include<conio.h>
int main()
{int array[3][3];
int i,j;
printf("elements of array are");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
    {
scanf("%d",&array[i][j]);
    }
}printf("Elements of 2D array are\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
    {printf("\t");
        printf("%d",array[i][j]);
}
    printf("\n");
}return 0;
}
