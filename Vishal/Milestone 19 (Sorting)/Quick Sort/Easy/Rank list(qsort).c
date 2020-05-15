#include<stdio.h>

struct Rank
    {
    char name[11];
    int Roll;
    int marks;
    };
    
int Sort(const void*a,const void*b)
{
   struct Rank std1 = *(struct Rank*)a;
   struct Rank std2 = *(struct Rank*)b;

    if(std1.marks < std2.marks)
    return 1;
    else if(strcmp(std1.name,std2.name) > 0 && std1.marks == std2.marks)
    return 1;
    else if(strcmp(std1.name,std2.name) == 0 && std1.marks == std2.marks && std1.Roll > std2.Roll)
    return 1;
    
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    
    struct Rank student[n];
    for(int i=0;i<n;i++)
       scanf("%s %d %d",student[i].name,&student[i].Roll,&student[i].marks);
    
    qsort(student,n,sizeof(struct Rank),Sort);
    for(int i=0;i<n;i++)
       printf("%s %d %d\n",student[i].name,student[i].Roll,student[i].marks);
    
   return 0;
}