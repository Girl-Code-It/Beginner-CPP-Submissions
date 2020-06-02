#include<stdio.h>

int main()
{
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    char name[n][21];
    int tmp,fan[n];
    char temp[21];
    for(i=0; i<n; i++)
        scanf("%s %d",&name[i],&fan[i]);

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(fan[i]<fan[j])
            {
                tmp=fan[i];
                fan[i]=fan[j];
                fan[j]=tmp;
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
            else if(fan[i] == fan[j] && strcmp(name[i],name[j]) > 0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
        }
    }
    for(i=0; i<t; i++)
        printf("%s\n",name[i]);
    return 0;
}