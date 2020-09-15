// https://practice.geeksforgeeks.org/problems/cutted-segments/0

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int MaxCuts(int l , int p , int q , int r)
{
    int DP[l+1];
    for(int i = 0 ; i < l+1 ; i++)
        DP[i] = -1;
        
    DP[0] = 0;
    
    for(int i = 0 ; i <= l ; i++)
    {
        if(DP[i] == -1)
            continue;
            
        if(i+p <= l)
            DP[i+p] = max(DP[i+p] , DP[i]+1);
        
        if(i+q <= l)
            DP[i+q] = max(DP[i+q] , DP[i]+1);
            
        if(i+r <= l)
            DP[i+r] = max(DP[i+r] , DP[i]+1);
    }
    return DP[l];
}

int main() {
	int t , l , p , q , r;
	cin >> t;
	while(t--)
	{
	    cin >> l;
	    cin >> p >> q >> r;
	    cout << MaxCuts(l , p , q , r) << "\n";
	}
	return 0;
}
