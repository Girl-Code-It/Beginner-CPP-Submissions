#include <bits/stdc++.h>
using namespace std;
inline int rotation(string s, string t, int num, int n)
{
    string a;
    for(int i = 1; i < n; i++)
        a += s[i];
    //a.append(s[i]);
    a += s[0];
    //cout << a;
    if(a == t)
    {
        //cout << num;
        return num;
    }
    else
    {
        num++;
        return rotation(a, t, num, n);
    }
}
int main ()
{
    int n, num = 1;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if(s==t)
        cout << "0\n";
    /*string a = "";
    while (1) {
    	for(int i = 1; i < s.size(); i++)
    		a += s[i];
    	a += s[0];
    	if(a == t){
    		break;
    	}
    	else{
    		num++;
    		s = a;
    		a = "";
    	}
    }*/
    //cout << s << t;
    else
    {
        int res = rotation(s, t, num, n);
        //cout << num;
        cout << res;
    }
}
