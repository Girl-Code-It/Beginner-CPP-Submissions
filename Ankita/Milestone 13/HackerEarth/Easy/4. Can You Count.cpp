#include<bits/stdc++.h>
using namespace std;

long long canYouCount (string s) {
   // write your code here
   long long out = 0, index = 0, out_ = 1;
   string b;
   for (int i = 0; i < s.size(); i++)
   {
       int flag = 1;
       if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
       {
           for (int j = 0; j < index; j++)
           {
               if(b[j] == s[i])
               {
                   flag = 0;
                   break;
               }
           }
           if(index == 0 || flag == 1)
           {
               out ++;
               b[index] = s[i];
               index++;
           }
       }
       else if (s[i] == '_')
       {
            out_ *= out;
       }
   }
   if (out_ == 0)
   return 1;
   else
   return out_;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T+1; t_i++)
    {
        string s;
        getline(cin, s);
        if(t_i > 0)
        {
            long long out_;
            out_ = canYouCount(s);
            cout << out_;
            cout << "\n";
        }
    }
}
