//Good Subsequences
#include <iostream>
#include<string>
#include<string.h>
using namespace std;

int main() {
	int t;
	char c[100001];
	cin>>t;
	while(t--)
	{	
		int a[26]= {0},sum = 1;
        cin>>c;
        int l=strlen(c);
        
        for(int i=0; i<l; i++)
            a[c[i]-97]++;         //Count the no of occurance of alphabet
        
        long long M=1000000007;
        for(int i=0; i<26; i++) 
        {	
           if(a[i]>0)
             sum=((sum%M)*(a[i]%M))%M;
        }
        cout<<sum<<endl;
	}
	return 0;
}


