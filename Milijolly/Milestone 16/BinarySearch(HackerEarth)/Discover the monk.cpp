#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void sort(long long* A, long long size)
{
        for(int i=0; i<size; i++)
        {
                for(int j=i+1; j<size; j++)
                {
                        if(A[i] > A[j])
                        {
                                int temp = A[i];
                                A[i] = A[j];
                                A[j] = temp;
                        }
                }
        }
}
int main() {
	long long n,q,x;
	long long arr[100001];
	cin>>n;
	cin>>q;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//qsort(arr,n,4,com);
	sort(arr,n);
	while(q--)
	{
		cin>>x;
		int flag=0;
		int start=0,end=n-1;
		while(start<=end)
		{
			int mid= start+((end-start)/2);

			if(arr[mid]==x)
			{	flag=1;
				break;
			}	

			else if(arr[mid]>x)
				end=mid-1;
			else
				start=mid+1;
		}
		/*for(int i=0;i<n;i++)
		{
			if(x==arr[i])
			flag =1;
		}*/
		if(flag==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		
	}

}
