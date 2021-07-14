//program to find the LCM of two numbers using recursion

#include <bits/stdc++.h>
using namespace std;

int LCM(int a,int b,int max)
{
		
	if(max % a == 0 && max % b == 0) 
        return max;
        
	return LCM(a,b,max+1);
}

int main()
{
	int a,b,max;
	cin>>a>>b;
	max = a>b? a : b;
	cout<<LCM(a,b,max);
}
