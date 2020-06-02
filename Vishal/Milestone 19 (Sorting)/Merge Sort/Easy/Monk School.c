#include<stdio.h>

struct school
{
   char teacher[36];
   char student[36];
   int age;
};

typedef struct school Sch;

int Sort(const void *a,const void *b)
{
    Sch x = *(Sch*)a;
    Sch y = *(Sch*)b;
    
    if(strcmp(x.teacher,y.teacher) > 0)
    return 1;
    else if(strcmp(x.teacher,y.teacher) == 0 && x.age > y.age)
    return 1;
    
    return 0;
}

int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    
    //no use of this just ignore 
    char tech[36];
    for(int i = 0;i<n;i++)
       scanf("%s",tech);
   
    Sch Schl[m];
    getchar();
    for(int i = 0;i<m;i++)
      scanf("%s %s %d",Schl[i].teacher,Schl[i].student,&Schl[i].age);
    //sort the teacher name 
    //and if the teacher name is same sort as age 
    qsort(Schl,m,sizeof(Sch),Sort);
    
   
    int i = 0;
   while(i != m)
      {
       //to store the starting value of i
        int k = i;
        //to count the number of teacher with same name
        int count = 1;
        while(strcmp(Schl[k].teacher,Schl[k+1].teacher) == 0)
        {
        ++count;
        ++k;
        }
        //print teacher name only once
        printf("%s\n",Schl[i].teacher);
        
        //print student name & age 
        while(count)
        {
         printf("%s %d\n",Schl[i].student,Schl[i].age);
         //increament for next student name & age with same teacher 
         i++;
         count--;
        }
        
      }
    
    return 0;
}