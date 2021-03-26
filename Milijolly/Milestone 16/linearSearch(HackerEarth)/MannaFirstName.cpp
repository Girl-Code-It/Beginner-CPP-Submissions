#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int suvo=0,suvojit=0; string s;
		cin>>s;
        for(int i=0;i<s.size();i++)
        {

        if(s[i]=='S'&& s[i+1]=='U' &&s[i+2]=='V'&&s[i+3]=='O' )
        {
            if(s[i+4]=='J'&& s[i+5]=='I' &&s[i+6]=='T')
             {  suvojit++;
                i = i+6;
             }
            else
            {
            i= i+3;
            suvo++; 
            }
        }
       
        }
         cout<<"SUVO = "<<suvo<<", "<<"SUVOJIT = "<<suvojit<<endl;
	
    }
}
