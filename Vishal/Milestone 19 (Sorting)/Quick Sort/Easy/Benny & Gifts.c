#include<stdio.h>

struct direction
{
   int x;
   int y;
}Point[100005];

int Sort(const void*a,const void*b)
{
   struct direction l = *(struct direction*)a;
   struct direction r = *(struct direction*)b;

   if(l.x > r.x)
   return 1;
   else if(l.y > r.y && l.x == r.x)
   return 1;

   return 0;
}
int main()
{
    char path[100005];
    scanf("%s",path);
    int len = strlen(path),k=1,x=0,y=0,count=0;
    
    for(int i=0;i<len;i++)
    {
      if(path[i] == 'L')
      y--;
      else if(path[i] == 'R')
      y++;
      else if(path[i] == 'U')
      x--;
      else if(path[i] == 'D')
      x++;
    
      Point[k].x = x;
      Point[k].y = y;
      k++;
    }
    //sorting the point ACC to increasing value of the x
    //if value of the x is Same then check for increasing value of the y
    qsort(Point,k,sizeof(struct direction),Sort);
    
    for(int i=0;i<k-1;i++)
    {
      //Checking the point the same or not
      if(Point[i].x == Point[i+1].x && Point[i].y == Point[i+1].y)
      count++;
    }
    printf("%d\n",count);
   return 0;
}