#include<bits/stdc++.h>
using namespace std;

string decode (string s) {
   // Write your code here
   string a = "", null ="";
   int index = 0;
    for(int i = s.size(); i > -1; i--)
    {

        if(index == 0)
        {
            string temp = s[i] + null ;
            //cout << "temp=" << temp ;
            a += temp;
            index++;
            //cout << a << "1\n";
        }
        else if( index%2 == 0 && index != 0)
        {
            string temp = null + s[i] ;
            //cout << "temp=" << temp ;
            a.insert(index/2, temp);
            index++;
            //cout << a << "2\n";
        }
        else if(index % 2 != 0)
        {
            string temp = null + s[i] ;
            //cout << "temp=" << temp ;
            a.insert((index-1)/2, temp);
            index++;
            //cout << a << "3\n";
        }

    }
    reverse(a.begin(), a.end());
    return a;
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
            string out_;
            out_ = decode(s);
            if(t_i > 1)
                cout << "\n";
            cout << out_;
        }
    }
}
