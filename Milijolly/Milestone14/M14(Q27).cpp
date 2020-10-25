//String Division
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int t, flag=0; 
	char s[1001]; 	 // to check if we can split string into 4 differnt substrings 
	cin>>t;
	while(t--)
	{
		int c[30]= {0},count=0,i,l;
		cin>>s;
		l=strlen(s);
		if(l<4)
		 flag=0;
		else if (l>=10)
		 flag=1;
		else 
		{
			for(i=0; i<l; i++)
            {
                c[s[i]-'a']++;
            }
            for(i=0; i<26; i++)
            {
                if(c[i]!=0)
                  count++;	
            }
			if(count==1)
                flag=0;
            else if(count>=4)
                flag=1;
            else if(l>=7)
                flag=1;
			else if(l==4)
            {
                if(count==4)
                    flag=1;
                else
                    flag=0;
            }
			else if(l==5)
			{
				if(count==2)
                    flag=0;
                else if(count==3)
                {
                    flag=1;
                    for(i=0; i<l-1; i++)
                    {
                        if(c[s[i]-'a']==3)                     
                            flag=0;                     
                    }
                   for(i=0; i<l-1; i++)
                    {
                        if(s[i]==s[i+1])
                            flag=1;
                    }
                }
			}
			 else if(l==6)
            {
                if(count==3)
                    flag=1;
                else if(count==2)
                {
                    flag=1;
                    for(i=0; i<26; i++)
                    {
                        if(c[i]==1)
                            flag=0;
                    }
                }
            }

		} 
	
	if(flag==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
	}		
}

