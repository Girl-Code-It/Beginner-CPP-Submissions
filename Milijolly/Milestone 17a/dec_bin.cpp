//program to convert a decimal number to binary using recursion.
#include <bits/stdc++.h>
using namespace std;

int dec_bin(int n)
{
    if(n==0)
    	return 0;
	   	
    return  (n%2) + (10* dec_bin(n/2));
}
  
int main()
{
    int n;
    cin>>n;
	cout<<dec_bin(n);
    return 0;
}
