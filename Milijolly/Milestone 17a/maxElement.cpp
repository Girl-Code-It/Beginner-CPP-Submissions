// code to print largest element of array 
#include <iostream>
using namespace std;


int parr(int a[10],int ind,int max)
{ 
	if(ind == 0)
		return max;
	
	if(max<a[ind])
		 max= a[ind];
	
	return parr(a,ind-1,max);
}

int main(void){
    int n; int a[20];
    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    	
    
    int res = parr(a,n-1,a[0]);
    cout<<res;
}
