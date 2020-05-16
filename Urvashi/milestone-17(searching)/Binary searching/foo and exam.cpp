#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	long long int t,a,b,c,d,k;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&k); 
	int x=(int)ceil(cbrt((float)((k)/a)))+1; 
	while(x--)
	{
	if((d+(t)*(c+(t)*(b+a*(t))))<=k||t==0) 	
		{
 		printf("%d\n",x);					
		break;									
 		}	
	}
}
}
