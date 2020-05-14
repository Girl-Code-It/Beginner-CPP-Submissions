#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char name[21],ans[21];
    int rating,max = 0;
    for(i=0; i<n; i++)
    {
        scanf("%s %d",&name,&rating);

        if(rating > max)
        {
            max = rating;
            strcpy(ans,name);
        }
       else if((rating == max) && (strcmp(name,ans) < 0))
            strcpy(ans,name);
    }
    printf("%s\n",ans);
    return 0;
}
