#include <iostream>
#include<stdlib.h>
using namespace std;

int com(void const*a,void const*b)
{
    return (*(int*)a - *(int*)b);
}

int BinarySearch(int a[],int n,int p)
{
	int start=0;
	int end= n-1;
	int mid;
	while(start<=end)
	{
		mid= start + ((end-start)/2);

		if(p==a[mid])
        {
           if(a[mid + 1] == p)
           {  
               start = mid + 1;
            }
           else
		        return mid;
        }
		else if(p<a[mid])
		 end= mid-1;
		
		else
		 start= mid+1;		  
	}
}
int main() {
	int N,Q;
	int power[10000],sum[10000],bp;
	cin >>N; // number of soldiers
	for(int i=0;i<N;i++) // power of each soldier
		cin>>power[i];
	
    qsort(power,N,sizeof(int),com);
    sum[0] = power[0];
    for(int i=1; i<N; i++)
        sum[i] = sum[i-1] + power[i];

	cin>>Q; // number of rounds 
	while(Q--)
	{	int res;
		cin>>bp; // power of bishu
		res=BinarySearch(power,N,bp);
		cout<<res+1<<" "<<sum[res]<<endl;
	}
	
}
