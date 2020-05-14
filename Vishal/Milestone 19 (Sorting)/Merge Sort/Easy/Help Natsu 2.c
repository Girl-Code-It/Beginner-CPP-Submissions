
#include<stdio.h>

struct task {
    char name[10];
    int freq;
};

int cmp(const void*a,const void*b) {
    struct task x= *(struct task*)a;
    struct task y= *(struct task*)b;
    if(x.freq > y.freq)
        return 1;
    else if(strcmp(x.name,y.name)>0 && x.freq == y.freq)
        return 1;
    return 0;
}

int main()
{
    int n,test,i;
    struct task t[10240];

    scanf("%d",&test);
    while(test--) {
        scanf("%d",&n);

        for(i=0; i<n; i++) {
            scanf("%s",t[i].name);
            t[i].freq=1;
        }
        //sorting according to their task-names
        qsort(t,n,sizeof(struct task),cmp);

        //removing multiple tasks with same task-name
        int j=0;
        for(i=1; i<n; i++) {
            if(strcmp(t[i].name,t[i-1].name)==0) { //if 2 task-name are same
                t[j].freq++;                      //freq of 1 is increased
                t[i].freq=0;                //freq of other is decreased to 0
            }
            else
                j=i;
        }
        //sorting acccording to their frequency
        qsort(t,n,sizeof(struct task),cmp);

        for(i=0; i<n; i++) {
            if(t[i].freq!=0)
                printf("%d %s\n",t[i].freq,t[i].name);
        }
    }
    return 0;
}