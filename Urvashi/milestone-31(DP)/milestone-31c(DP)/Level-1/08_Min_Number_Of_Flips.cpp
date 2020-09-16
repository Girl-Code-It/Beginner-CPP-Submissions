//  https://practice.geeksforgeeks.org/problems/min-number-of-flips/0

#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int a = 0 , b = 0 , i = 0 , j = 0;
        while(s[i])
        {
            if(i < s.size() && s[i] == '1')
                a++;
            if(i + 1 < s.size() && s[i + 1] == '0')
                a++;
            i += 2;

            if(j < s.size() && s[j] == '0')
                b++;
            if(j + 1 < s.size() && s[j + 1] == '1')
                b++;
            j += 2;
        }
        cout << min(a,b) << endl;
    }
	return 0;
}
