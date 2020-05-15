#include<stdio.h>

int isCompatible(char *a,char *b)
{
    int len_a = strlen(a),len_b = strlen(b);
    if(len_a != len_b)
    return 0;
    
    int diff[len_a];
    
    for(int i=0;i<len_a;i++)
    {
       if(a[i] > b[i]) 
       return 0;
       else
       diff[i] = b[i] - a[i];
    }
    
    for(int i=0;i<len_a;i++)
    {
        if(diff[i] < diff[i+1])
        return 0;
    }
    
    return 1;

}
int main()
{
    char a[10000],b[100000];
    
    scanf("%s",&a);
    
    scanf("%s",&b);

    if(isCompatible(a,b))
        printf("YES");
    else
        printf("NO");

    return 0;
}