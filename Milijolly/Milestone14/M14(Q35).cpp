//Unique Subsequence
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int t; char s[100001];
	cin >>t;
	while(t--)
	{	long long int n;
		int count=0;
		cin>>n;
		cin>>s;
	
		for(int i=0;i<n;i++)
		{
			if(s[i]==s[i+1]) //check if adjacent are equal 
			{
				count++;
			}
		}

		cout<<n-count<<endl;
	}										
}

