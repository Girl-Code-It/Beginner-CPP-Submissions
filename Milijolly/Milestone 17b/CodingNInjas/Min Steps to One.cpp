//Minimum steps to 1 (array of memoization)
#include<bits/stdc++.h>
using namespace std;

int getMinSteps(int n, int* memo)
{
    if(n<=1)
        return 0;
    
    if (memo[n] != -1) 
       return memo[n]; 
   
   
    int res = getMinSteps(n-1,memo);
	
    if (n%2 == 0) 
    {
    	cout<<res<<" ";
		   res = min(res, getMinSteps(n/2, memo)); 
	}
    if (n%3 == 0) 
        res = min(res, getMinSteps(n/3, memo)); 
  
    memo[n] = 1 + res; 
    
    return memo[n]; 
}

int countMinStepsToOne(int n)
{
	//Write your code here
    int memo[n+1]; 
  
    // initialize memoized array 
    for (int i=0; i<=n; i++) 
        memo[i] = -1; 
  
    return  getMinSteps(n, memo); 
    
}
int main()
{
	int n;
	cin>>n;
	cout<<countMinStepsToOne(n);
	
}
