#include<stdio.h>
 #include<math.h>
 
int main(){
     long int t, m;
     scanf("%ld",&t);
     while(t--){
         int a,b,k1,k2;
         scanf("%d %d %d %d %ld",&a,&b,&k1,&k2,&m);
         
         long int low=0,up=100005;
		 long int mid;
		while(low<=up)
		{
			mid=(low+up)/2;
			if(a*pow(mid,k1) + b*pow(mid,k2) > m)
			{
				up = mid-1;
			}
			else
				low = mid+1;
		}	
		low--;
		if(a*pow(low,k1) + b*pow(low,k2) <= m && low<100000)
			printf("%ld\n",low);
		else
			printf("Love is immortal\n");
     }
 }
