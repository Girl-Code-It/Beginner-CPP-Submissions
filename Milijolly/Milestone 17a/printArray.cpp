// code to print elements of array 
#include <iostream>
using namespace std;

void parr(int a[10],int ind,int n)
{ 
    if(ind==n-1)
     {   
     	cout<<a[n-1]<<" ";
         return;
     }
     cout<<a[ind]<<" ";
    return parr(a,ind+1,n);
}

int main(void){
    int n; int a[20];
    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    	
    parr(a,0,n);
}
