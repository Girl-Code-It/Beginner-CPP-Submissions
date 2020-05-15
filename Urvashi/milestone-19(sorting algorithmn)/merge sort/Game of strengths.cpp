#include<bits/stdc++.h>
#define r 1000000007
using namespace std;
void Merge(int *Left,int n, int *Right,int *a,int mid)
{
   int i=0,j=0,k=0;
   int nL= mid,nR=n-mid;
   while(i < nL && j < nR)
    {
       if(Left[i] <= Right[j])
        {
           a[k] = Left[i];
           i++;
        
        }
       else
        {
           a[k] = Right[j];
           j++;
        
        }
        k++;
    }
    
    //if There is no element remaining in the Right array
    while(i < nL)
     {
        a[k] = Left[i];
        i++;
        k++;
     }
    
    //if There is no element remaining in the Left array
    while(j < nR)
     {
        a[k] = Right[j];
        j++;
        k++;
     }
    
}

//Recursive Function to Sort array 
void MergeSort(int *a,int n)
{
   //Base case
   //if length of the array is less than 2
   //then it is already sorted
   if(n < 2)
   return;

   //To divide an array into two part
   int mid = n/2;
  
   //Two array to store element 
   int Left[mid],Right[n-mid];

   //Initialize the array
   for(int i=0;i<mid;i++)
      Left[i] = a[i];
    
    for(int i=mid;i<n;i++)
      Right[i-mid] = a[i];

   //Recursive call 
   MergeSort(Left,mid);
   MergeSort(Right,n-mid);

   //After sorting merge array
   Merge(Left,n,right,a,mid);
int main()
{
	int t,n,sum=0,temp;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(a,n);
    for(int i=0;i<n-1;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		temp=abs(a[j]-a[i]);
			sum+=temp;
		}
	}
	int sum1=sum*a[n-1];
	cout<<sum1%r<<endl;
	}
}
