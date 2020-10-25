//Caesar's Cipher
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >>t;
	while(t--)
	{	
	    char S[100001],T[100001];
		int k = 0,diff,num=0;
		cin>>S;
		cin>>T;
		diff= T[0]-S[0];

		if(diff<0)
        diff += 26;

		for(int i=1;i<strlen(S);i++)
             {
                num = T[i] - S[i];
                if(num < 0)
                num += 26;

                if(diff != num)
                k = 1;     
             }

		if(k == 1)
            cout<<"-1"<<endl;
        else
            cout<<diff<<endl;
	}										
}

