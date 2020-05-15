#include<stdio.h>

void main()
{
    printf("File name is %s\n\n",__FILE__);
    printf("Today's Date is %s\n\n",__DATE__);
    printf("Time Now is %s\n\n",__TIME__);
    printf("Line no. is %d\n\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);
}