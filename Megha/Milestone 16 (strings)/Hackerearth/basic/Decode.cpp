

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
	char s[100000];
	cin>>s;
    int l=strlen(s);
   
    	for(int i=l-2;i>=0;i-=2)
    	{
                cout<<s[i];
        }

        if(l%2==0){
         for(int i=1;i<l;i+=2)
    	{
               cout<<s[i];
            }
        }

        else{
        for(int i=0;i<l;i+=2)
    	{
          
                cout<<s[i];
            }
        }
        
        cout<<endl;
    
}
return 0;
}
