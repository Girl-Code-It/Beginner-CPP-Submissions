#include<bits/stdc++.h>
using namespace std;

long long Count (string s) 
{   
    int cA=0,cE=0,cI=0,cO=0,cU=0,c=0;
    long long ans=1;
    for(int i=0;s[i]!='\0';i++)
    {   
        if (s[i] == 'a' && cA == 0)
            {   c++;  
                cA++; 
            }
        else if (s[i] == 'e' && cE == 0)
            {   c++; 
                cE++;
            }
        else if (s[i] == 'i' && cI == 0)
            {   c++;
                cI++;
            }
        else if (s[i] == 'o' && cO == 0)
            {   c++;
                cO++;
            }
        else if (s[i] == 'u' && cU == 0)
            {   c++;
                cU++;
            }
        else if (s[i] == '_')
            {   ans *= c;
            }
    }
    return ans; 
}

int main() 
{
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        char s[10000000];
        cin>>s;
        long long out;
        out = Count(s);
        cout << out;
        cout << "\n";
    }
}
